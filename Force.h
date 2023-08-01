#ifndef FORCE_H
#define FORCE_H
#include <iostream>
class Force {
private: 
	double _x, _y;
public:
	Force(double x, double y);
	double getAmplitude();
	double getX();
	double getY();
	Force sum(Force a);
	Force scalarMultiplication(double lambda);
};
#endif

