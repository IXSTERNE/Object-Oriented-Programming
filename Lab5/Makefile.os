lab5: main.o 
	g++ main.o -o lab5

main.o: main.cpp lab5.hh
	g++ -c main.cpp

clean:
	rm *.o lab5