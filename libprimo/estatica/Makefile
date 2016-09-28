all:
	gcc -c lib/primo.c -o build/primo.o 

	ar rcs build/libprimo.a build/primo.o

	ar -t build/libprimo.a

	nm -s build/libprimo.a

	echo "Copiando biblioteca"

	cp lib/primo.h build/primo.h

	
	echo "Compilando cliente:"

	gcc -static src/main.c -L./build -I./build -lprimo -o build/main.run

clean: 