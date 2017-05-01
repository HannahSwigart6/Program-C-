#include <iostream>
#include <string>

int main()
{
	double priceBagel = 0.99, priceDonut = 0.75, priceCoffee = 1.20;
	int orderBagels, orderDonuts, orderCoffee, total, bagelTotal, donutTotal, coffeeTotal;

	std::cout << "How many beagels did the customer order?" << std::endl;
	std::cin >> orderBagels;

	std::cout << "How many donuts did the customer order?" << std::endl;
	std::cin >> orderDonuts;

	std::cout << "How many cups of coffee did the customer order?" << std::endl;
	std::cin >> orderCoffee;

	bagelTotal = orderBagels * priceBagel;
	donutTotal = orderDonuts * priceDonut;
	coffeeTotal = orderCoffee * priceCoffee;
	total = bagelTotal + donutTotal + coffeeTotal;

	std::cout << "The customer ordered " << orderBagels << " bagel(s), " << orderDonuts << " donut(s), and " << orderCoffee << "cup(s) of coffe" << std::endl;
	std::cout << "The total is $" << total << std::endl;
}