CFLAGS=-Wextra -g -pedantic -std=c99 -lm

1.5.1:
	cc -o 1.5.1 1.5.1.c point.c

clean:
	rm -rf *.dSYM/
	rm -f 1.2.1 1.2.2 1.2.3 1.2.4 1.2.5 1.4.9 1.5.1 function_pointer test_calloc_matrix
