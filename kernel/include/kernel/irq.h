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
#ifndef _IRQ_H
#define _IRQ_H
typedef void(*irq_t)();
namespace IRQ
{
void InstallHandler(int irq, irq_t handler);
void UninstallHandler(int irq);
}
#endif
