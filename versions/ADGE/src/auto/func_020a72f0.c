#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208abf8();
extern void r1();
// clang-format off
asm void func_020a72f0(void) {
    stmfd sp!, {r4, lr}
    movs r4, r0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldr r1, [r4, #0x1f0]
    cmp r1, #0x0
    beq L_020a7310
    blx r1
L_020a7310:
    mvn r0, #0x0
    strh r0, [r4, #0x94]
    ldrh r0, [r4, #0x20]
    add r1, r4, #0x1
    orr r0, r0, #0x1
    strh r0, [r4, #0x20]
    ldrb r0, [r4, #0x1]
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
    ldr r1, [r4, #0x18c]
    cmp r1, #0x0
    beq L_020a7360
    ldrh r0, [r1, #0x20]
    orr r0, r0, #0x1
    strh r0, [r1, #0x20]
    ldr r1, [r4, #0x18c]
    ldrb r0, [r1, #0x1]
    add r1, r1, #0x1
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
L_020a7360:
    mov r1, #0x0
    strh r1, [r4, #0x90]
    strh r1, [r4, #0x8a]
    mvn r0, #0x0
    strh r0, [r4, #0x98]
    strh r0, [r4, #0x8c]
    strh r0, [r4, #0x9a]
    strh r0, [r4, #0x8e]
    strh r0, [r4, #0x9c]
    strh r1, [r4, #0x9e]
    str r1, [r4, #0x1f4]
    str r1, [r4, #0x1f8]
    str r1, [r4, #0x1fc]
    str r1, [r4, #0x1f0]
    str r1, [r4, #0x208]
    str r1, [r4, #0x20c]
    str r1, [r4, #0x214]
    add r0, r4, #0x190
    bl func_0208abf8
    ldr r2, [r4, #0x1e0]
    cmp r2, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    ldr r1, [r2, #0x1c]
    mov r0, #0x0
    bic r1, r1, #0x1
    orr r1, r1, #0x1
    str r1, [r2, #0x1c]
    str r0, [r4, #0x1e0]
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
