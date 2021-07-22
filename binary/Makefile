# name of the compiler
CC	=	gcc
#defining compiler flags
CFLAGS =	-std=c11 -Wall -fmax-errors=5 -Wextra
#defining library paths (no libraries yet)
LFLAGS	=
#define libraries
LIBS	=
#define object files the program needs
OBJFILES = binary.o forming.o reverse.o
# name of the executable program
MAIN	=	binary
# creating the executable (generic code)
all	:	$(MAIN)
$(MAIN)	: $(OBJFILES)
	$(CC) $(CFLAGS) -c -o $@ &<
clean:
	rm -f $(OBJFILES) $(MAIN)