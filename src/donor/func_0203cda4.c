/* compiler: 2.0/sp1p5  */
/* func_0203cda4 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0203cda4.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
extern void func_0202914c();
extern void func_0203db58();
extern void func_021060cc();
extern char data_0214b484[];
// clang-format off
asm void func_0203cda4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrsb r0, [r4, #0xa4]
    cmp r0, #0x3
    bne L_0203cdd0
    add r1, r4, #0x8b
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r1, =0x2710
    ldr r0, [r4, #0x9e4]
    strh r1, [r0, #0x1a]
L_0203cdd0:
    mov r0, r4
    bl func_0203db58
    bl func_021060cc
    ldrsb r1, [r4, #0x88]
    cmp r1, r0
    bne L_0203cfa8
    ldrsb r0, [r4, #0xa6]
    cmp r0, #0x3
    beq L_0203ce40
    cmp r0, #0x4
    beq L_0203ce88
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r3, r1, asr #0x10
    b L_0203cecc
L_0203ce40:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0xa
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r3, r1, asr #0x10
    b L_0203cecc
L_0203ce88:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0x14
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r3, r1, asr #0x10
L_0203cecc:
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_0203cee4
    cmp r2, #0x8
    movle r0, #0x1
    ble L_0203cf24
L_0203cee4:
    cmp r2, #0x57
    moveq r0, #0x1
    beq L_0203cf24
    ldrsh r1, [r4, #0xe8]
    cmp r1, #0xf
    blt L_0203cf08
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203cf24
L_0203cf08:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203cf20
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203cf24
L_0203cf20:
    mov r0, #0x0
L_0203cf24:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203cf84
    ldrsh r1, [r4, #0xe8]
    ldr r0, =0x477
    cmp r1, r0
    blt L_0203cf50
    ldr r0, =0x47d
    cmp r1, r0
    movle r0, #0x0
    ble L_0203cf84
L_0203cf50:
    ldr r0, =0x4c6
    cmp r1, r0
    blt L_0203cf6c
    ldr r0, =0x4c9
    cmp r1, r0
    movle r0, #0x0
    ble L_0203cf84
L_0203cf6c:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_0203cf84
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203cf84:
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r0, r4
    mov r1, #0x1
    mov r2, #0x2
    bl func_0202914c
    ldmfd sp!, {r4, lr}
    bx lr
L_0203cfa8:
    ldrsb r0, [r4, #0xa6]
    cmp r0, #0x3
    beq L_0203d000
    cmp r0, #0x4
    beq L_0203d048
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r3, r1, asr #0x10
    b L_0203d08c
L_0203d000:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0xa
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r3, r1, asr #0x10
    b L_0203d08c
L_0203d048:
    ldr r0, =data_0214b484
    ldr r1, =0x10dcd
    ldr r0, [r0, #0x0]
    mov r2, #0x5
    ldr r3, [r0, #0x0]
    mul r1, r3, r1
    add r3, r1, #0x1
    mov r1, r3, lsl #0x10
    mov r1, r1, lsr #0x10
    mul r2, r1, r2
    mov r1, r2, lsr #0x10
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    add r1, r1, #0x14
    mov r1, r1, lsl #0x10
    str r3, [r0, #0x0]
    mov r3, r1, asr #0x10
L_0203d08c:
    ldrsh r2, [r4, #0xf0]
    cmp r2, #0x4
    blt L_0203d0a4
    cmp r2, #0x8
    movle r0, #0x1
    ble L_0203d0e4
L_0203d0a4:
    cmp r2, #0x57
    moveq r0, #0x1
    beq L_0203d0e4
    ldrsh r1, [r4, #0xe8]
    cmp r1, #0xf
    blt L_0203d0c8
    cmp r1, #0x4b
    movle r0, #0x1
    ble L_0203d0e4
L_0203d0c8:
    ldr r0, =0x119
    cmp r1, r0
    blt L_0203d0e0
    cmp r1, #0x13c
    movle r0, #0x1
    ble L_0203d0e4
L_0203d0e0:
    mov r0, #0x0
L_0203d0e4:
    cmp r0, #0x0
    movne r0, #0x0
    bne L_0203d144
    ldrsh r1, [r4, #0xe8]
    ldr r0, =0x477
    cmp r1, r0
    blt L_0203d110
    ldr r0, =0x47d
    cmp r1, r0
    movle r0, #0x0
    ble L_0203d144
L_0203d110:
    ldr r0, =0x4c6
    cmp r1, r0
    blt L_0203d12c
    ldr r0, =0x4c9
    cmp r1, r0
    movle r0, #0x0
    ble L_0203d144
L_0203d12c:
    cmp r2, #0x53
    moveq r0, #0x0
    beq L_0203d144
    cmp r2, #0x54
    moveq r0, #0x0
    movne r0, #0x1
L_0203d144:
    cmp r0, #0x0
    ldmeqfd sp!, {r4, lr}
    bxeq lr
    mov r1, #0x1
    mov r0, r4
    mov r2, r1
    bl func_0202914c
    ldmfd sp!, {r4, lr}
    bx lr
}
// clang-format on
