mindreader: mindreader.c
	mkdir -p ./build
	gcc --std=c11 -pedantic -Wall -O3 -o ./build/mindreader mindreader.c;
	./build/mindreader
clean:
	rm ./build/*
