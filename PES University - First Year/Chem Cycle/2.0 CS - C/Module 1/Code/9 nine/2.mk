a.out : 2_c_str.o 2_str_fn.o
	gcc 2_c_str.c 2_str_fn.c
2_str_fn.o : 2_str_fn.c 2_str_fn.h
	gcc -c 2_str_fn.c
2_c_str.o : 2_c_str.c 2_str_fn.h
	gcc -c 2_c_str.c

