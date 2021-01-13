CC = g++ #can add any flags ex. -std=c++11
exe_file = list
$(exe_file): prog.o shopping.o
	$(CC) prog.o shopping.o -o $(exe_file)
prog.o: prog.cpp
	$(CC) -c prog.cpp
shopping.o: shopping.cpp
	$(CC) -c shopping.cpp

clean:
	rm -f *.out *.o $(exe_file)
