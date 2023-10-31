#include "calculate.h"

double calculator::calc(double x, char operate, double y)
{
	switch (operate) {
		case '+' :
			return x + y;
		case  '-':
			return x - y;
		case '*':
			return x * y;
		case '/':
			return x / y;
		default:
			return 0;
	}
}
