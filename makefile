objects = ezallocator.o
MyStl:$(objects)
	g++ -o MyStl $(objects)
clean:
	rm MyStl $(objects)
