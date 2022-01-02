a.out : 6_client.o 6_server.o
	gcc 6_client.o 6_server.o
6_client.o : 6_client.c 6_server.h
	gcc -c 6_client.c
6_server.o : 6_server.c 6_server.h
	gcc -c 6_server.c

