all: test

test: main.cpp Shape.cpp Circle.cpp Rectangle.cpp Triangle.cpp
	g++ main.cpp Shape.cpp Circle.cpp Rectangle.cpp Triangle.cpp -o test

clean:
	rm test