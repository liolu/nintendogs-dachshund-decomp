#!/usr/bin/env python3
"""m2c kept running for auto_match: python starts and imports m2c once, not once per draft (about 1 s against 0.15 s).

    python m2c_server.py <folder of m2c.py>

Reads one JSON list of m2c arguments per line, answers one JSON object per line: {"rc", "out", "err"}, what the
command line would have given. auto_match kills it when a draft takes too long, and starts another; it ends by itself
when auto_match goes away (end of stdin), or after GIVE_UP seconds on one draft if auto_match was killed meanwhile.
"""

import contextlib
import io
import json
import os
import sys
import threading
import traceback

GIVE_UP = 60

sys.path.insert(0, sys.argv[1])
from m2c.main import parse_flags, run  # noqa: E402

sys.setrecursionlimit(min(2**31 - 1, 10 * sys.getrecursionlimit()))  # as m2c's main
answers = sys.stdout
for line in sys.stdin:
    out, err = io.StringIO(), io.StringIO()
    watchdog = threading.Timer(GIVE_UP, os._exit, [1])
    watchdog.daemon = True
    watchdog.start()
    with contextlib.redirect_stdout(out), contextlib.redirect_stderr(err):
        try:
            rc = run(parse_flags(json.loads(line)))
        except SystemExit as e:
            rc = e.code if isinstance(e.code, int) else 1
        except Exception:
            traceback.print_exc()
            rc = 1
    watchdog.cancel()
    answers.write(json.dumps({"rc": rc, "out": out.getvalue(), "err": err.getvalue()}) + "\n")
    answers.flush()
