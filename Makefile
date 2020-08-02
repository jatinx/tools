all:
	mkdir -p build/
	clang++ -O3 -Iinclude/ src/endian.cc -o build/endian
	clang++ -O3 -Iinclude/ src/dumpbits.cc -o build/dumpbits

clean:
	rm -rf build/
