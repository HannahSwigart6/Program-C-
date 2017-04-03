#include <iostream> 
#include <string> 



int main()
{
	int aFirst;
	int bSecond; 
	int cAdd; 
	int dSubtract;
	int eDivide;
	int fMultiply;
	int gRemainder;
	std::string nameString;


	std::cout << "what is your name: ";
	std::cin >> nameString;

	std::cout << "Enter a number: ";
	std::cin >> aFirst;

	std::cout << "Enter a second number: ";
	std::cin >> bSecond;

	cAdd = aFirst +bSecond; 
	dSubtract = aFirst - bSecond; 
	eDivide = aFirst / bSecond; 
	fMultiply = aFirst * bSecond; 
	gRemainder = aFirst % bSecond; 
	std::cout << aFirst << " and " << bSecond << "=" << cAdd << std::endl;

	std::cout << " The end " << nameString << std::endl; 
	return 0;
}