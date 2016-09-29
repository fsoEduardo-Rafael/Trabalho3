all:
	gcc -shared -fPIC lib/primo.c -o build/libprimo.so
	
	echo "Compilando cliente:"

	gcc src/main.c -o build/main -ldl

clean: 

	rm build/*.o build/*.run