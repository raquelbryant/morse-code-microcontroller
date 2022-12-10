
CFLAGS := -D__SAME54P20A__ -Isrc/

CC := arm-none-eabi-gcc
ODIR := obj
SDIR := src

OBJS := \
	main.o \
	startup_same54.o

OBJ = $(patsubst %,$(ODIR)/%,$(OBJS))

$(ODIR)/%.o: $(SDIR)/%.c
	$(CC) $(CFLAGS) -c -g -o $@ $^


bin: $(OBJ)
	$(CC) $(CFLAGS) obj/* -Tsame54p20a_flash.ld -nostartfiles -lc -lgcc -static -eReset_Handler -oproject.elf


