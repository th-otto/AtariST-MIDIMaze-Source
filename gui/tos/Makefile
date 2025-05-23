include ../silent.mk

srcdir = ../../src

CC = m68k-atari-mint-gcc
STARTUP = crt0.o gemlib/ctrlcnts.o
LDFLAGS = -nostartfiles -nostdlib
LIBS = -lgcc

LD = $(CC)
CPU_CFLAGS =
OPT = -O2 -fomit-frame-pointer
WARN = -Wall -Wundef -Wstrict-prototypes -Wmissing-prototypes -Werror
INCLUDES = -I$(srcdir) -I../common
CFLAGS = $(CPU_CFLAGS) $(OPT) $(WARN) $(INCLUDES)
LDFLAGS += -s

GEMLIB_OBJS = \
	gemlib/crysif.o \
	gemlib/ap_init.o \
	gemlib/crystal.o \
	gemlib/ap_exit.o \
	gemlib/ev_multi.o \
	gemlib/fm_do.o \
	gemlib/fm_dial.o \
	gemlib/fm_alert.o \
	gemlib/fm_cente.o \
	gemlib/fs_input.o \
	gemlib/gr_handl.o \
	gemlib/gr_mouse.o \
	gemlib/mn_bar.o \
	gemlib/mn_tnorm.o \
	gemlib/ob_draw.o \
	gemlib/rs_obfix.o \
	gemlib/wm_creat.o \
	gemlib/wm_open.o \
	gemlib/wm_close.o \
	gemlib/wm_delet.o \
	gemlib/wm_get.o \
	gemlib/wm_updat.o \
	gemlib/vclrwk.o \
	gemlib/vclsvwk.o \
	gemlib/vopnvwk.o \
	gemlib/vrocpyfm.o \
	gemlib/vdi.o \
	$(empty)

all:: midimaze.prg

OUT = -c -o 
include ../SRCFILES
include ../RULES

OBJS += \
	main.o \
	joystick.o \
	$(GEMLIB_OBJS) \
	$(empty)

.c.o:
	$(AM_V_CC)$(CC) $(CFLAGS) -c -o $@ $<

midimaze.prg: $(OBJS)
	$(AM_V_LD)$(LD) -o $@ $(LDFLAGS) $(OBJS) $(LIBS)

$(GEMLIB_OBJS): gemlib/crysbind.h gemlib/vdilib.h

main.o: main.c
	$(AM_V_CC)$(CC) $(CFLAGS) $(OUT)$@ $<

crt0.o: crt0.S
	$(AM_V_CC)$(CC) -c -o $@ $<

clean::
	$(RM) *.o gemlib/*.o $(srcdir)/*.o *.prg
