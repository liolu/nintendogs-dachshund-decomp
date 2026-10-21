/* Minimal stdarg.h for mwccarm: variadic functions spill their four
 * argument registers, so &last is the spill slot of the last named
 * argument and the varargs follow it contiguously. */
#ifndef STDARG_H
#define STDARG_H

typedef char *va_list;

#define va_start(ap, last) ((ap) = (va_list)(&(last) + 1))
#define va_arg(ap, type)   ((ap) += sizeof(type), *(type *)((ap) - sizeof(type)))
#define va_end(ap)         ((void) (ap))

#endif
