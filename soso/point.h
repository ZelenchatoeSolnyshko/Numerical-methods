#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class point
{
private:
	double x;
	double y;
public:
	point();
	point(double x, double y);
	point(const point& other);

	void setX(double NewX);
	double getX();

	void setY(double NewY);
	double getY();

	friend std::ostream& operator<<(std::ostream& poin, const point& myPoint);

	friend std::istream& operator>>(std::istream& poin, point& myPoint);

	double calcDistance(point& anotherPoint);

	~point();
};

