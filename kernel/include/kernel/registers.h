/*----------------------------------------------------------------------
 * Copyright (C) 2016 Pedro Falcato
 *
 * This file is part of Spartix, and is made available under
 * the terms of the GNU General Public License version 2.
 *
 * You can redistribute it and/or modify it under the terms of the GNU
 * General Public License version 2 as published by the Free Software
 * Foundation.
 *----------------------------------------------------------------------*/
#ifndef _KERNEL_REGISTERS_H
#define _KERNEL_REGISTERS_H
#include <stdint.h>
#ifdef __x86_64__

typedef struct registers
{
	uint64_t rax,rbx,rcx,rdx,rdi,rsi,rsp,rbp,rip, r8, r9, r10, r11, r12, r13, r14, r15, rflags;
	uint16_t cs, ss;
}__attribute__((packed))registers_t;
inline void wrmsr(uint32_t msr, uint32_t lo, uint32_t hi)
{
	asm volatile("wrmsr"::"a"(lo), "d"(hi), "c"(msr));
}
#define FS_BASE_MSR 0xC0000100
#define GS_BASE_MSR 0xC0000101
#define KERNEL_GS_BASE 0xC0000102
#else

typedef struct registers
{
   uint32_t eax,ebx,ecx,edx,edi,esi,esp,ebp,eip,eflags,cr3;
   uint16_t ss,cs;
} __attribute__((packed)) registers_t;

#endif /* __x86_64__ */
#endif
