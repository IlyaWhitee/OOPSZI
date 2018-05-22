#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double function(double x)
{
	double func;
	func = (sin(2 * x) + sin(5 * x) - sin(3 * x)) / (cos(x) - cos(3 * x) + cos(5 * x));
	return(func);

}