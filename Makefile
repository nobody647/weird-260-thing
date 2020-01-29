decoder: main.o decoder.o
	g++ main.o decoder.o -Wall -o decoder

main.o: main.c
	g++ -c main.c

decoder.o: decoder.c decoder.h
	g++ -c decoder.c

clean:
	rm *.o decoder
