# name of the compiler
CC	=	gcc
#defining compiler flags
CFLAGS =	-std=c11 -Wall -fmax-errors=5 -Wextra
#defining library paths
LFLAGS	=
#define libraries
LIBS	=
#define object files the program needs
OBJFILES = binary.o forming.o reverse.object
# name of the executable program
MAIN	=	binary
# crea
all	:	$(MAIN)
$(MAIN)	: $(OBJFILES)
	$(CC) $(CFLAGS) -c -o $@ &<
clean:
	rm -f $(OBJFILES) $(MAIN)