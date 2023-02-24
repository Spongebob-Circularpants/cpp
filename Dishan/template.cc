#include <iostream>

template <typename T>
double squareRoot(T number)
{
	if (number < 0)
		throw std::invalid_argument("Square root of negative number"); 
	double n = number, x = 1, fx;
	while( ( ( (fx = x*x - n) > 0) ? fx : -fx) > 0.0000001)
		x = x - fx/(2*x);
	return x;
}

int main()
{
	int a;
	try {
		std::cout << "Enter a number to find the square root: ";
		std::cin >> a;
		std::cout << squareRoot(a) << std::endl;
	}catch (std::invalid_argument e){
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}
