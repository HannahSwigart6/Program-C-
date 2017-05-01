#include <iostream>
#include <string>

int main()
{
	double pound = .78, peso = 18.74, yen = 111.81, dollars, poundsTotal, pesosTotal, yenTotal;
	std::string choice;

	std::cout << "Welcome to cash exchange." << std::endl;
	std::cout << "How would you like to exchange your money?" << std::endl;
	std::cout << "Would you like to exchange for pounds, pesos, or yen?" << std::endl;
	std::cin >> choice;

	if (choice == "Pounds" || choice == "pounds")
	{
	std::cout << "How much money would you like to exchange?" << std::endl;
	std::cin >> dollars;
	poundsTotal = dollars * pound;

	std::cout << "You will get " << poundsTotal << "pounds back." << std::endl;
	}
	else if (choice == "Pesos" || choice == "pesos")
	{
		std::cout << "How much money would you like to exchange?" << std::endl;
		std::cin >> dollars;
		pesosTotal = dollars * peso;

		std::cout << "You will get " << pesosTotal << "pesos back." << std::endl;
	}
	else if (choice == "yen" || choice == "Yen")
	{

		std::cout << "How much money would you like to exchange?" << std::endl;
		std::cin >> dollars;
		yenTotal = dollars * yen;

		std::cout << "You will get " << yenTotal << " yens back." << std::endl;
	}
}