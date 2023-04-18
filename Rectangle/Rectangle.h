#pragma once
class Rectangle
{
public:
	Rectangle() : Rectangle(1.0, 1.0) {}
	Rectangle(double length, double width);
	double getLength() const;
	double getWidth() const;
	void setLenght(double length);
	void setWidth(double width);
	double area() const;
	void resize(float mulLength, float mulWidth);

private:
	double length;
	double width;
};

