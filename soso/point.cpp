#include "point.h"
using namespace	std;
point::point()
{
	x = 0;
	y = 0;
}

point::point(double x, double y)
{
	this->x = x;
	this->y = y;
}

point::point(const point& other)
{
	this->x = other.x;
	this->y = other.y;
}

void point::setX(double NewX)
{
	x = NewX;
}

double point::getX()
{
	return x;
}

void point::setY(double NewY)
{
	y = NewY;
}

double point::getY()
{
	return y;
}


double point::calcDistance(point& anotherPoint)
{
	return sqrt(pow((anotherPoint.x - x), 2) + pow((anotherPoint.y - y), 2));;
}

point::~point() {

}

std::ostream& operator<<(std::ostream& poin, const point& myPoint)
{
	poin << "{" << myPoint.x << "," << myPoint.y << "}";
	return poin;
}

std::istream& operator>>(std::istream& poin, point& myPoint)
{
	cout << "¬ведите значение X: ";
	poin >> myPoint.x;
	cout << "¬ведите значение Y: ";
	poin >> myPoint.y;
	return poin;
}

