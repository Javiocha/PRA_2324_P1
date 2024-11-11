bin/testNode: testNode.cpp node.h
	mkdir -p bin
	g++ -o bin/TestNode testNode.cpp node.h

