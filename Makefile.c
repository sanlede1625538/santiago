

clean:
	rm -rf a.out util.o libutil.a main
obj:
	gcc -c util.c -o util.o
lib:
	ar rcs libutil.a util.o
bin: obj lib
	gcc -static main.c -L. -I. -lutil -o mainclean:
	rm -rf a.out util.o libutil.a main
obj:
	gcc -c util.c -o util.o
lib:
	ar rcs libutil.a util.o
bin: obj lib
	gcc -static main.c -L. -I. -lutil -o main 
  
  
  Makefile:6: fallo en las instrucciones para el objetivo 'lib'
make: *** [lib] Error 1

