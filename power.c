#include <stdio.h>
#include "myMath.h"
#define exp 2.7182818

double Exponent (int x) {
	double e = exp;
	for (int i=1; i<x; i++) {
		e= e*exp;
	}
	return e;
}

double Power (double x, int y) {
	double pow= x;
	for (int i=1; i<y; i++) {
		pow= pow*x;
	}
	return pow;
}
