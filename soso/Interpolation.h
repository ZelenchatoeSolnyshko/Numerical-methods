#pragma once
class Interpolation
{
private:
	point p1;
	point p2;
public:
	Interpolation();
	Interpolation(point p1, point p2);
	Interpolation(const Interpolation& other);

};

