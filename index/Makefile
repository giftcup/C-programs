index: index.o allocate.o input.o sum.o
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra index.o allocate.o input.o sum.o -o index
# making object files
index.o : index.c index.h
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c index.c -o index.o
allocate.o : allocate.c index.h
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c allocate.c -o allocate.o
input.o : input.c index.h
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c input.c -o input.o
sum.o : sum.c index.h
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c sum.c -o sum.o
launch :
	./index
clean : 
	rm -f index.o allocate.o input.o sum.o index
