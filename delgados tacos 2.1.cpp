#include <iostream>
#include <string>

int main()
{
	int iteamYes = 1, iteamNo = 2;
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

	double total, iteam = 0;
	double tacoO = 0, burritoO = 0, drinkO = 0, chipsandSalsaO = 0, fajitasO = 0, chimichangaO = 0, friedicecreamO = 0, flanO = 0,
		RiceandrefriedBeansO = 0, enchiladosO = 0;
	double TotalWithTax;
	double tacoTotal, burritoTotal, drinkTotal, chipandsalsaTotal, fajitasTotal,
		chimichangaTotal, friedicecreamTotal, flanTotal, RiceandrefriedBeansTotal, enchiladosTotal;


	std::cout << "Welcome to Delgados Tacos." << std::endl;
	std::cout << "Would you like to order from our menu? If yes pick 1, if no pick 2.";
	std::cin >> iteamYes;
	if (iteamYes == 1)
	{
		std::cout << " What would you like to order? 1 for drink, 2 for burrito, 3 for taco, 4 for chips and salsa,\n"
			"5 for fajitas, 6 for chimichanga, 7 for fried ice cream, 8 for flan, 8 rice and refried beans, 9 for enchilados." << std::endl;
		std::cin >> iteam;
		if (iteam == 1)
		{
			std::cout << "Drinks are $1.50." << std::endl;
			std::cout << "How many would you like?" << std::endl;
			std::cin >> drinkO;
		}

		else if (iteam == 2)
		{
			std::cout << "Burritos are $3.99." << std::endl;
			std::cout << "How many would you like?" << std::endl;
			std::cin >> burritoO;
		}
		else if (iteam == 3)
		{
			std::cout << "Tacos are $0.99." << std::endl;
			std::cout << "How many would you like?" << std::endl;
			std::cin >> tacoO;
		}
		else if (iteam == 4)
		{
			std::cout << "Chips and salsa are $1.50." << std::endl;
			std::cout << "How many would you like?" << std::endl;
			std::cin >> tacoO;
		}
		else if (iteam == 5)
		{
			std::cout << " Fajitas are $5.00.";
			std::cout << "How many would you like?" << std::endl;
			std::cin >> fajitasO;
		}

		else if (iteam == 6)
		{
			std::cout << "Chimichangas are $4.50." << std::endl;
			std::cout << "How many would you like?" << std::endl;
			std::cin >> chimichangaO;
		}
		else if (iteam == 7)
		{
			std::cout << "Fried Ice Cream is $2.50." << std::endl;
			std::cout << "How many would you like?" << std::endl;
			std::cin >> friedicecreamO;
		}
		else if (iteam == 8)
		{
			std::cout << "flan is $1.00." << std::endl;
			std::cout << "How many would you like?" << std::endl;
			std::cin >> flanO;
		}
		else if (iteam == 9)
		{
			std::cout << "Enchalados are $1.99." << std::endl;
			std::cout << "How many would you like?" << std::endl;
			std::cin >> enchiladosO;
		}

	}
	else if (iteamNo)
	{

		std::cout << "We hope to see you again!" << std::endl;
	}
	tacoTotal = tacoP * tacoO;
	burritoTotal = burritoP * burritoO;
	drinkTotal = drinkP * drinkO;
	chipandsalsaTotal = chipandsalsaP * chipsandSalsaO;
	fajitasTotal = fajitasP * fajitasO;
	chimichangaTotal = chimichangaP * chimichangaO;
	friedicecreamTotal = friedicecreamP * friedicecreamO;
	flanTotal = flanP * flanO;
	RiceandrefriedBeansTotal = RiceandrefriedBeansP * RiceandrefriedBeansO;
	enchiladosTotal = enchiladosP * enchiladosO;

	total = tacoTotal + burritoTotal + drinkTotal + chipandsalsaTotal + fajitasTotal + chimichangaTotal + friedicecreamTotal + flanTotal + RiceandrefriedBeansTotal + enchiladosTotal;
	TotalWithTax = total * taxRate;

	std::cout << "Your total is " << total << "." << std::endl;
	std::cin >> total;
