#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020038a8();
extern void func_0205ece8();
extern void func_02080978();
extern void func_020c6f9c();
extern void func_020c7020();
extern void func_020c93d4();
extern void func_020c9f18();
extern void func_020ca3a8();
extern void func_020ca4f4();
extern void func_020ca7a0();
extern void func_020ca918();
extern void func_020ca944();
extern void func_020caa6c();
extern void func_020fb8dc();
extern void func_02105acc();
extern char data_021317d8[];
extern char data_021317dc[];
extern char data_02131808[];
extern char data_02131820[];
extern char data_0214b170[];
extern char data_0214b1d0[];
extern char data_0214b1e8[];
extern char data_0214b1fc[];
extern char data_0214b210[];
extern char data_0214b220[];
extern char data_0214b230[];
extern char data_0214b248[];
extern char data_0215a03c[];
// clang-format off
asm void func_021068d0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14c
    str r1, [sp, #0x0]
    mov r1, #0x258
    mov r10, r0
    bl func_020038a8
    ldr r1, =data_0215a03c
    str r0, [r1, #0x0]
    bl func_02080978
    ldr r2, =data_0215a03c
    ldr r1, =data_0214b1d0
    ldr r2, [r2, #0x0]
    str r0, [r2, #0x254]
    mov r0, r10
    bl func_020c7020
    mov r1, r0
    mov r0, r10
    bl func_020ca3a8
    ldr r3, =data_02131820
    ldr r1, [sp, #0x0]
    mov r2, #0x18
    mla r2, r1, r2, r3
    str r2, [sp, #0x1c]
    str r0, [sp, #0x4]
    mov r9, #0x2
    add r5, sp, #0x48
    mov r6, #0x1
    mov r4, #0x40
    mov r7, #0x0
L_02106944:
    ldr r0, =data_021317dc
    mov r8, r7
    str r0, [sp, #0x20]
    mov r0, r9, lsl #0x3
    str r0, [sp, #0x24]
    ldr r0, =data_02131808
    add r11, r0, r9, lsl #0x3
L_02106960:
    ldr r0, [sp, #0x0]
    cmp r0, #0x8
    mov r0, r7
    moveq r0, r6
    beq L_021069a0
    ldr r3, [sp, #0x1c]
    ldr r2, [sp, #0x24]
    mov r1, r7
    add r3, r3, r2
L_02106984:
    ldrsb r2, [r3, #0x0]
    add r1, r1, #0x1
    add r3, r3, #0x1
    cmp r8, r2
    moveq r0, r6
    cmp r1, #0x8
    blt L_02106984
L_021069a0:
    cmp r0, #0x0
    beq L_02106aa4
    ldr r0, =data_0214b170
    add r0, r0, r9, lsl #0x5
    ldr r3, [r0, r8, lsl #0x2]
    cmp r3, #0x0
    beq L_02106aa4
    cmp r9, #0x2
    bne L_02106a24
    ldr r0, [sp, #0x20]
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02106a24
    mov r0, r6
    bl func_020fb8dc
    cmp r0, #0x1
    bne L_02106a04
    ldr r3, =data_0214b170
    ldr r2, =data_0214b1e8
    add r3, r3, r9, lsl #0x5
    ldr r3, [r3, r8, lsl #0x2]
    mov r0, r5
    mov r1, r4
    bl func_0205ece8
    b L_02106a34
L_02106a04:
    ldr r3, =data_0214b170
    ldr r2, =data_0214b1fc
    add r3, r3, r9, lsl #0x5
    ldr r3, [r3, r8, lsl #0x2]
    mov r0, r5
    mov r1, r4
    bl func_0205ece8
    b L_02106a34
L_02106a24:
    ldr r2, =data_0214b210
    mov r0, r5
    mov r1, r4
    bl func_0205ece8
L_02106a34:
    mov r0, r10
    mov r1, r5
    bl func_020c7020
    mov r1, r0
    mov r0, r10
    bl func_020ca3a8
    add r3, sp, #0x88
    add r3, r3, r9, lsl #0x5
    str r0, [r3, r8, lsl #0x2]
    ldrb r0, [r11, #0x0]
    mov r2, r9, lsl #0x5
    mov r1, r8, lsl #0x2
    cmp r0, #0x0
    beq L_02106ab0
    ldr r0, =data_0214b170
    add r0, r0, r2
    ldr r3, [r1, r0]
    ldr r2, =data_0214b220
    mov r0, r5
    mov r1, r4
    bl func_0205ece8
    mov r0, r10
    mov r1, r5
    bl func_020c6f9c
    add r1, sp, #0xe8
    add r1, r1, r9, lsl #0x5
    str r0, [r1, r8, lsl #0x2]
    b L_02106ab0
L_02106aa4:
    add r0, sp, #0x88
    add r0, r0, r9, lsl #0x5
    str r7, [r0, r8, lsl #0x2]
L_02106ab0:
    ldr r0, [sp, #0x20]
    add r8, r8, #0x1
    add r0, r0, #0x1
    str r0, [sp, #0x20]
    add r11, r11, #0x1
    cmp r8, #0x8
    blt L_02106960
    subs r9, r9, #0x1
    bpl L_02106944
    ldr r1, =data_0214b230
    mov r0, r10
    bl func_020c7020
    mov r1, r0
    mov r0, r10
    bl func_020ca3a8
    ldr r1, =data_0215a03c
    mov r4, r0
    ldr r0, [r1, #0x0]
    add r0, r0, #0x230
    bl func_020c9f18
    mov r0, r10
    mov r2, r4
    mov r1, #0x88
    bl func_020caa6c
    ldr r1, =data_0215a03c
    mvn r2, #0x198
    ldr r3, [r1, #0x0]
    str r0, [r3, #0x48]
    ldr r0, [r1, #0x0]
    ldr r0, [r0, #0x48]
    str r2, [r0, #0x34]
    ldr r1, [r1, #0x0]
    add r0, r1, #0x230
    ldr r1, [r1, #0x48]
    bl func_020ca4f4
    ldr r0, =data_0215a03c
    mov r1, r10
    ldr r0, [r0, #0x0]
    mov r2, #0x1
    ldr r0, [r0, #0x48]
    bl func_020ca944
    ldr r1, =data_0215a03c
    mov r0, r10
    ldr r2, [r1, #0x0]
    ldr r1, =data_0214b248
    ldr r2, [r2, #0x48]
    ldr r4, [r2, #0x78]
    bl func_020c6f9c
    mov r1, r0
    mov r0, r4
    bl func_020c93d4
    mov r0, #0x0
    str r0, [r4, #0x8]
    swpb r0, r0, [r4]
    ldr r2, [sp, #0x4]
    mov r0, r10
    mov r1, #0x88
    bl func_020caa6c
    ldr r1, =data_0215a03c
    ldr r2, [r1, #0x0]
    str r0, [r2, #0x4c]
    ldr r1, [r1, #0x0]
    add r0, r1, #0x230
    ldr r1, [r1, #0x4c]
    bl func_020ca4f4
    mov r7, #0x0
    ldr r0, =data_021317d8
    ldr r4, =data_0215a03c
    str r0, [sp, #0x8]
    mov r0, #0x88
    str r0, [sp, #0x30]
    mvn r0, #0x198
    str r0, [sp, #0x34]
    mov r0, #0x1000
    str r7, [sp, #0xc]
    str r7, [sp, #0x38]
    str r7, [sp, #0x44]
    str r7, [sp, #0x3c]
    str r7, [sp, #0x2c]
    str r7, [sp, #0x28]
    mov r11, #0x1
    str r0, [sp, #0x40]
L_02106bf8:
    ldr r6, [sp, #0x28]
    mov r0, r6
    str r0, [sp, #0x10]
    ldr r0, =data_02131808
    add r0, r0, r7, lsl #0x3
    str r0, [sp, #0x14]
L_02106c10:
    ldr r1, [sp, #0xc]
    ldr r0, [sp, #0x10]
    ldr r5, [sp, #0x2c]
    add r8, r1, r0
    add r0, r7, r6
    add r0, r0, #0xf
    str r0, [sp, #0x18]
L_02106c2c:
    ldr r0, [sp, #0x8]
    ldrb r0, [r0, #0x0]
    cmp r5, r0
    bge L_02106d98
    add r0, sp, #0x88
    add r0, r0, r7, lsl #0x5
    ldr r2, [r0, r6, lsl #0x2]
    cmp r2, #0x0
    beq L_02106d98
    ldr r1, [sp, #0x30]
    mov r0, r10
    bl func_020caa6c
    ldr r1, [r4, #0x0]
    add r1, r8, r1
    add r1, r1, r5, lsl #0x2
    str r0, [r1, #0x50]
    ldr r0, [r4, #0x0]
    add r0, r8, r0
    add r0, r0, r5, lsl #0x2
    ldr r1, [r0, #0x50]
    ldr r0, [sp, #0x34]
    str r0, [r1, #0x34]
    ldr r1, [r4, #0x0]
    add r0, r1, #0x230
    add r1, r8, r1
    add r1, r1, r5, lsl #0x2
    ldr r1, [r1, #0x50]
    bl func_020ca4f4
    ldr r1, [r4, #0x0]
    cmp r7, #0x0
    add r1, r8, r1
    add r1, r1, r5, lsl #0x2
    ldr r2, [r1, #0x50]
    mov r0, r5, lsl #0x2
    ldrb r1, [r2, #0x1]
    add r2, r2, #0x1
    orr r1, r1, #0x1
    swpb r1, r1, [r2]
    beq L_02106cdc
    cmp r7, #0x1
    beq L_02106cdc
    cmp r7, #0x2
    beq L_02106cfc
    b L_02106d18
L_02106cdc:
    ldr r0, [r4, #0x0]
    add r1, r7, #0xf
    add r0, r8, r0
    add r0, r0, r5, lsl #0x2
    ldr r0, [r0, #0x50]
    and r1, r1, #0xff
    bl func_020ca7a0
    b L_02106d18
L_02106cfc:
    ldr r2, [r4, #0x0]
    ldr r1, [sp, #0x18]
    add r2, r8, r2
    add r0, r0, r2
    ldr r0, [r0, #0x50]
    and r1, r1, #0xff
    bl func_020ca7a0
L_02106d18:
    ldr r0, [sp, #0x14]
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02106dac
    ldr r0, [r4, #0x0]
    mov r1, r10
    add r0, r8, r0
    add r0, r0, r5, lsl #0x2
    ldr r0, [r0, #0x50]
    mov r2, r11
    bl func_020ca918
    ldr r1, [r4, #0x0]
    add r0, sp, #0xe8
    add r1, r8, r1
    add r1, r1, r5, lsl #0x2
    ldr r2, [r1, #0x50]
    add r0, r0, r7, lsl #0x5
    ldr r9, [r2, #0x80]
    ldr r1, [r0, r6, lsl #0x2]
    mov r0, r9
    bl func_020c93d4
    ldr r0, [sp, #0x38]
    str r0, [r9, #0x8]
    swpb r0, r0, [r9]
    mov r0, r11
    bl func_020fb8dc
    cmp r0, #0x1
    ldreq r0, [sp, #0x3c]
    streq r0, [r9, #0xc]
    ldrne r0, [sp, #0x40]
    strne r0, [r9, #0xc]
    b L_02106dac
L_02106d98:
    ldr r0, [r4, #0x0]
    add r0, r8, r0
    add r1, r0, r5, lsl #0x2
    ldr r0, [sp, #0x44]
    str r0, [r1, #0x50]
L_02106dac:
    add r5, r5, #0x1
    cmp r5, #0x5
    blt L_02106c2c
    ldr r0, [sp, #0x10]
    add r6, r6, #0x1
    add r0, r0, #0x14
    str r0, [sp, #0x10]
    ldr r0, [sp, #0x14]
    cmp r6, #0x8
    add r0, r0, #0x1
    str r0, [sp, #0x14]
    blt L_02106c10
    ldr r0, [sp, #0x8]
    add r7, r7, #0x1
    add r0, r0, #0x1
    str r0, [sp, #0x8]
    ldr r0, [sp, #0xc]
    cmp r7, #0x3
    add r0, r0, #0xa0
    str r0, [sp, #0xc]
    blt L_02106bf8
    ldr r0, [sp, #0x0]
    cmp r0, #0x8
    bne L_02106e28
    mov r0, #0x0
    bl func_02105acc
    ldr r0, =data_0215a03c
    mov r1, #0x1
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x0]
    b L_02106e3c
L_02106e28:
    bl func_02105acc
    ldr r0, =data_0215a03c
    mov r1, #0x0
    ldr r0, [r0, #0x0]
    str r1, [r0, #0x0]
L_02106e3c:
    ldr r3, =data_0215a03c
    mov r0, #0x0
    ldr r1, [r3, #0x0]
    mov r4, #0x1
    str r0, [r1, #0xc]
    ldr r2, [r3, #0x0]
    ldr r1, [r2, #0x48]
    ldr r2, [r2, #0xc]
    ldr r1, [r1, #0x78]
    str r2, [r1, #0x8]
    ldr r1, [r3, #0x0]
    str r4, [r1, #0x8]
    ldr r1, [r3, #0x0]
    str r0, [r1, #0x2c]
    ldr r1, [r3, #0x0]
    str r0, [r1, #0x30]
    ldr r1, [r3, #0x0]
    str r0, [r1, #0x34]
    ldr r1, [r3, #0x0]
    str r0, [r1, #0x38]
    ldr r1, [r3, #0x0]
    str r0, [r1, #0x3c]
    ldr r1, [r3, #0x0]
    strh r0, [r1, #0x40]
    ldr r1, [r3, #0x0]
    add r2, r1, #0x42
    swpb r1, r4, [r2]
    ldr r1, [r3, #0x0]
    str r0, [r1, #0x44]
    add sp, sp, #0x14c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
