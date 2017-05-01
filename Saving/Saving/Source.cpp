#include <iostream>
#include <string>

int main()
{
	double total, grosspay, percent, bonus, savings, bonusSaving;


	std::cout << "what was your grosspay this year?" << std::endl;
	std::cin >> grosspay;

	std::cout << "What percent would you like to put into savings?" << std::endl;
	std::cin >> percent;

	std::cout << "How much was you bonus this year?" << std::endl;
	std::cin >> bonus;

	savings = (grosspay / 100) * 30 ;

	bonusSaving = bonus - 100;

	total = (grosspay - savings) - bonusSaving;

	std::cout << "You put $" << total << "into savings." << std::endl;
}