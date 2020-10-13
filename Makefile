proc_fan: main.o
	cc -o proc_fan main.o

main.o: main.c
	cc -c main.c
  
clean :
	rm proc_fan main.o