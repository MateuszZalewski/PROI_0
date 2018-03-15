CC := g++
bin/main : src/main.cpp
	$(CC) src/main.cpp -o bin/main
