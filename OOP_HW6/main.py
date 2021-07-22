# This is a sample Python script.

# Press Shift+F10 to execute it or replace it with your code.
# Press Double Shift to search everywhere for classes, files, tool windows, actions, and settings.
from abc import ABCMeta, abstractmethod


class Shape:
    def __init__(self, color):
        self.color = color

    def print(self):
        print(self.color, end=' ')

    @abstractmethod
    def get_area(self):
        pass


class Circle(Shape):
    def __init__(self, color, radius):
        super().__init__(color)
        self.radius = radius

    def print(self):
        super().print()
        print(" Circle, radius" + str(self.radius) + " ,area " + str(self.get_area()))

    def get_area(self):
        return self.radius * self.radius * 3.14


class Rectangle(Shape):
    def __init__(self, color, height, width):
        super().__init__(color)
        self.height = height
        self.width = width

    def print(self):
        super().print()
        print(" Rectangle, height " + str(self.height) + " ,area " + str(self.get_area()))

    def get_area(self):
        return self.height * self.width


class Triangle(Shape):
    def __init__(self, color, height, base):
        super().__init__(color)
        self.height = height
        self.base = base

    def print(self):
        super().print()
        print(" Triangle, height " + str(self.height) + ", base " + str(self.base) + ", area " + str(self.get_area()))

    def get_area(self):
        return 0.5 * self.height * self.base


def main():
    shape = []
    classtype = []
    x, y = 10, 20
    s = "yellow"
    circle = Circle(s, x)
    a = Triangle(s, x, y)
    b = Rectangle(s, x, y)
    c = Triangle("red", 3, 5)
    d = Circle("green", 5)
    e = Rectangle("white", 3, 8)
    shape.append(circle)
    classtype.append("circle")
    shape.append(a)
    classtype.append("triangle")
    shape.append(b)
    classtype.append("rectangle")
    shape.append(c)
    classtype.append("triangle")
    shape.append(d)
    classtype.append("circle")
    shape.append(e)
    classtype.append("rectangle")
    print("Printing all shapes:")
    for i in shape:
        i.print()

    print("Print all circle:")
    for i in shape:
        if type(i) == type(circle):
            i.print()

    for i in shape:
        del i

    return 0


main()
