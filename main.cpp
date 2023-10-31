#include <iostream>
#include "calculate.h"



int main() {

	double x = 0;
	double y = 0;
	double result = 0;
	char operate = '+';
	calculator c;


	std::cout << "Calculator in c++" << '\n';
	std::cout << "enter a operation, format: x+y x-y x*y x/y" << '\n';

	while (true){
		std::cin >> x >> operate >> y;
		result = c.calc(x, operate, y);
		std::cout << "Result: " << x << operate << y << " = " << result << '\n';



	}


}