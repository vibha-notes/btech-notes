a.out : 1_array.o 1_client.o
	gcc 1_array.o 1_client.o
1_array.o : 1_array.c 1_array.h
	gcc -c 1_array.c
1_client.o : 1_client.c 1_array.h
	gcc -c 1_client.c

