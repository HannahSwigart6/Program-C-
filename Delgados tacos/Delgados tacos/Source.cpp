#include <iostream>
#include <string>

int main()
{
	double tacoP = 0.99;
	double burritoP = 3.99;
	double drinkP = 1.50;
	double chipandsalsaP = 1.50;
	double fajitasP = 5.00;
	double chimichangaP = 4.50;
	double friedicecreamP = 2.50;
	double flanP = 1.00;
	double RiceandrefriedBeansP = 2.00;
	double enchiladosP = 1.99;


	const double taxRate = 1.075;

	double total;
	double tacoO, burritoO, drinkO, chipsandSalsaO, fajitasO, chimichangaO, friedicecreamO, flanO, RiceandrefriedBeansO, enchiladosO;
	double TotalWithTax;
	double tacoTotal, burritoTotal, drinkTotal, chipandsalsaTotal, fajitasTotal, chimichangaTotal, friedicecreamTotal, flanTotoal, RiceandrefriedBeansTotal, enchiladosTotoal;
	std::cout << "Welcome to Delgados Tacos." << std::endl;

	std::cout << "Would you like a drink ?" << std::endl;
	std::cin >> drinkO;

	std::cout << "How many tacos would you like?" << std::endl;
	std::cin >> tacoO;

	std::cout << "How many burritos would you like?" << std::endl;
	std::cin >> burritoO;

	std::cout << "How many order of chips and salsa would you like?" << std::endl;
	std::cin >> chipsandSalsaO;

	std::cout << "How many fajitas would you like?" << std::endl;
	std::cin >> fajitasO;

	std::cout << "How many chimichangas would you like?" << std::endl;
	std::cin >> chimichangaO;

	std::cout << "How many orders of fried ice cream would you like?" << std::endl;
	std::cin >> friedicecreamO;

	std::cout << "How many orders of flan would you like?" << std::endl;
	std::cin >> flanO;

	std::cout << "How many orders of rice and refried Beans would you like?" << std::endl;
	std::cin >> RiceandrefriedBeansO;

	std::cout << "How many enchilados would you like?" << std::endl;
	std::cin >> enchiladosO;
	
	tacoTotal = tacoP * tacoO;
	burritoTotal = burritoP * burritoO;
	drinkTotal = drinkP * drinkO;
	chipandsalsaTotal = chipandsalsaP * chipsandSalsaO;
	fajitasTotal = fajitasP * fajitasO;
	chimichangaTotal = chimichangaP * chimichangaO;
	friedicecreamTotal = friedicecreamP * friedicecreamO;
	flanTotoal = flanP * flanO;
	RiceandrefriedBeansTotal = RiceandrefriedBeansP * RiceandrefriedBeansO;
	enchiladosTotoal = enchiladosP * enchiladosO;

	total = tacoTotal + burritoTotal + drinkTotal + chipandsalsaTotal + fajitasTotal + chimichangaTotal + friedicecreamTotal + flanTotoal + RiceandrefriedBeansTotal + enchiladosTotoal;
	TotalWithTax = total * taxRate;

}