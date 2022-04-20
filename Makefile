calculator: main.o eval.o
	mkdir build
	gcc -o build/calculator src/main.o src/eval.o
	rm src/main.o src/eval.o

main.o:
	gcc -c src/main.c -o src/main.o

eval.o:
	gcc -c src/eval.c -o src/eval.o
