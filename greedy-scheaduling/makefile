CCFLAGS = -std=c++11
graph: graph.cpp graph.h
	g++ $(CCFLAGS) -c graph.h graph.cpp

mst: graph
	g++ $(CCFLAGS) -c graph.o mst.cpp

main: graph mst main.cpp
	g++ $(CCFLAGS) graph.o mst.o main.cpp -o main.o

clean:
	rm *.o *.gch