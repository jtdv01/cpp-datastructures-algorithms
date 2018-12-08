CCFLAGS = -std=c++11
graph.o: graph.cpp graph.h
	g++ $(CCFLAGS) -c graph.h graph.cpp

main: graph.o
	g++ $(CCFLAGS) graph.o main.cpp -o main.o

clean:
	rm *.o