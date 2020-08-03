all:
	mkdir -p build/
	clang++ -O3 -Iinclude/ src/endian.cc -o build/endian
	clang++ -O3 -Iinclude/ src/dumpbits.cc -o build/dumpbits
	clang++ -O3 -Iinclude/ src/calc.cc -o build/calc

clean:
	rm -rf build/
