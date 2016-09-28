all:
	gcc -shared -fPIC -c lib/primo.c -o build/libprimo.so
	
	echo "Compilando cliente:"

	gcc src/main.c -L./build -I./build -lprimo -o build/main.run

clean: 

	rm build/*.o build/*.run