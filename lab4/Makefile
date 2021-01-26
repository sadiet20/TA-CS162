CC = g++ #can add any flags ex. -std=c++11
exe_file = bag
$(exe_file): prog.o Backpack.o Textbook.o
	$(CC) prog.o Backpack.o Textbook.o -o $(exe_file)
prog.o: prog.cpp
	$(CC) -c prog.cpp
Backpack.o: Backpack.cpp
	$(CC) -c Backpack.cpp
Textbook.o: Textbook.cpp
	$(CC) -c Textbook.cpp

clean:
	rm -f *.out *.o $(exe_file)
