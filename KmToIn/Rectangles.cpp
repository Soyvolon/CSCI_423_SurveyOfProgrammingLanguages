#include <iostream>

int main()
{
    double width = 5;
    double height = 10;
    double area, perimiter;

    perimiter = (width * 2) + (height * 2);
    area = width * height;

    std::cout << "Width: " << width << "\nHeight: " << height << "\n\nPerimiter: " << perimiter << "\nArea: " << area;
}

/*
2. Write C++ program that will store the width and height of a rectangle in two variables and then compute and
assign to another two variables the perimeter and the area of that rectangle. Display in the console the width, height, perimeter and area. 
*/