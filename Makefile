
app:
	gcc -c -o main.o main.c
	gcc -c -o hello.o ./hello/hello.c
	gcc -o app main.o hello.o

clean:
	rm -rf app
	rm -rf *.o