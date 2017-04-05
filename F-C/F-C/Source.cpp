#include <iostream>
#include <string>

int main()
{
	double inputF1, inputF2, inputF3, outputC1, outputC2, outputC3;

	std::cout << "What was the tempeture at 8:00 am ? In fahrenheit." << inputF1 << std::endl;
	std::cin >> inputF1; 

	std::cout << "What was the tempeture at 12:00 pm? In fahrenheit." << inputF2 << std::endl;
	std::cin >> inputF2;

	std::cout << "What was the tempeture at 5:00 pm? In fahrenheit."<< inputF3 << std::endl;
	std::cin >> inputF3;

	outputC1 = inputF1 - 32 * 5 / 9;
	outputC2 = inputF2 - 32 * 5 / 9;
	outputC3 = inputF3 - 32 * 5 / 9;

	std::cout << "The temp at 8Am was" << outputC1 << std::endl;
	std::cout << "The temp at 12pm was" << outputC2 << std::endl;
	std::cout << "The temp at 5pm was" << outputC3 << std::endl;

	system("pause");


}