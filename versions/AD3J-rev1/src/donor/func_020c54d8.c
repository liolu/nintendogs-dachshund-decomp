/* compiler: 2.0/sp1p5  */
/* func_020caae0 from projets/nintendogs-dachshund/src/auto/func_020caae0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
extern void func_02068380();
extern void func_020c4f28();
extern char func_01ffec9c[];
extern char func_01ffee18[];
// clang-format off
asm void func_020c54d8(void) {
    stmfd sp!, {r4, lr}
    mov r1, #0x5
    mov r4, r0
    bl func_020c4f28
    ldr r1, =func_01ffee18
    ldr r0, =func_01ffec9c
    str r1, [r4, #0x14]
    str r0, [r4, #0x18]
    mov r2, #0x0
    str r2, [r4, #0x1c]
    strh r2, [r4, #0x20]
    add r1, r4, #0x22
    swpb r0, r2, [r1]
    add r1, r4, #0x23
    mov r0, #0x1f
    swpb r0, r0, [r1]
    mov r0, #0x1000
    str r0, [r4, #0x24]
    str r0, [r4, #0x28]
    str r0, [r4, #0x2c]
    str r2, [r4, #0x30]
    str r2, [r4, #0x34]
    add r0, r4, #0x3c
    str r2, [r4, #0x38]
    bl func_02068380
    mov r0, #0x0
    strh r0, [r4, #0x6c]
    strh r0, [r4, #0x6e]
    strh r0, [r4, #0x70]
    strh r0, [r4, #0x72]
    str r0, [r4, #0x74]
    str r0, [r4, #0x78]
    str r0, [r4, #0x7c]
    str r0, [r4, #0x80]
    strh r0, [r4, #0x84]
    strh r0, [r4, #0x86]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
