all:main.o Shape.o Circle.o Rectangle.o Triangle.o main.class
	g++ -g Shape.o Circle.o Rectangle.o Triangle.o main.o -o main
main.o:
	g++ -c main.cpp -o main.o
Shape.o:Shape.h
	g++ -c Shape.cpp -o Shape.o
Rectangle.o:Rectangle.h
	g++ -c Rectangle.cpp -o Rectangle.o
Triangle.o:Triangle.h
	g++ -c Triangle.cpp -o Triangle.o
Circle.o:Circle.h
	g++ -c Circle.cpp -o Circle.o
main.class:
	javac main.java
clean:
	rm -f main main.o Shape.o Circle.o Rectangle.o Triangle.o main.class Triangle.class Rectangle.class Circle.class Shape.class