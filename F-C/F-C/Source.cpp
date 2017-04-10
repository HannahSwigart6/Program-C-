#include <iostream>
#include <string>

int main()
{
	double inputF1, inputF2, inputF3, outputC1, outputC2, outputC3;

	std::cout << "What was the tempeture at 8:00 am ? In fahrenheit." <<  std::endl;
	std::cin >> inputF1; 

	std::cout << "What was the tempeture at 12:00 pm? In fahrenheit." << std::endl;
	std::cin >> inputF2;

	std::cout << "What was the tempeture at 5:00 pm? In fahrenheit."<< std::endl;
	std::cin >> inputF3;

	outputC1 = inputF1 - 32 * 9 / 5;
	outputC2 = inputF2 - 32 * 9 / 5;
	outputC3 = inputF3 - 32 * 9 / 5;

	std::cout << "The temp in celcius at 8 am is " << outputC1 << " and in fahrenheit is " << inputF1 << std::endl;
	std::cout << "The temp in celcius at 12 pm is " << outputC2 << " and in fahrenheit is " << inputF2 << std::endl;
	std::cout << "The temp in celcius at 5 pm is " << outputC3 << " and in fahrenheit is " << inputF3 << std::endl;

	system("pause");
	return 0;

}