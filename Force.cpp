#include "Force.h"
using namespace std;
Force::Force(double x, double y) {
	_x = x;
	_y = y;
}
double Force::getX() {
	return _x;
}
double Force::getY() {
	return _y;
}
double Force::getAmplitude() {
	return sqrt(pow(_x, 2.0) + pow(_y, 2.0));
}
Force Force::sum(Force a) {
	return Force(a.getX() + _x, a.getY() + _y);
}
Force Force::scalarMultiplication(double lambda) {
	return Force(lambda * _x, lambda * _y);
}

