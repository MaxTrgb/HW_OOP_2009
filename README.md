# HW_OOP_2009
Create a base Shape class: The Shape class must have
virtual function area(), which calculates the area of the figure.
The Shape class must have a constructor that accepts a name
shapes (for example, "Circle", "Rectangle") and others are necessary
parameters. Create classes for specific geometric shapes,
which inherit from Shape:
Create classes Circle, Rectangle, Triangle that inherit from
Shape and implement the area() function that calculates the area
of each specific figure.
Create a Drawing class that uses composition:
The Drawing class must have a field that is an array
(or a list) of Shape objects. Use the standard ones
C++ facilities such as std::vector to store these objects.
Create an addShape() method that adds a shape to the object array.
Create a totalArea() method that calculates the total area of all
figures in the collection.
Create a Building class that uses aggregation:
The Building class must have a field that represents an object of type
Drawing, which points to a set of geometric shapes describing a building.
Create an addFloor() method that adds a new floor to the building by
adding shapes to Drawing. Create a totalBuildingArea() method that
calculates the total area of all floors of the building. Create a program that
creates objects of various geometric shapes, adds them to the Drawing collections and
Building, and displays the total area for each collection.
