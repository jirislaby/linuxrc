/*
 *
 * rootimage.h   Header file for rootimage.c
 *
 * Copyright (c) 1996-2002  Hubert Mantel, SuSE Linux AG  (mantel@suse.de)
 *
 */

extern void root_set_root       (char *root_tv);
extern int  root_boot_system    (void);
int ask_for_swap(int size, char *msg);

