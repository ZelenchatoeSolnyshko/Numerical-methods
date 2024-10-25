#include "Interpolation.h"
#include "point.h"
#include <iostream>

Interpolation::Interpolation()
{
	p1 = nullptr;
	p2 = nullptr;
}

Interpolation::Interpolation(point p1, point p2)
{
	this->p1 = p1;
	this->p2 = p2;
}

Interpolation::Interpolation(const Interpolation& other)
{
	this->p1 = other.p1;
	this->p2 = other.p2;
}
