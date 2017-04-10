#include <iostream>

int main()
{

	int pizzaYes = 1, pizzaNo = 2, pizzaSize = 0, Topping = 0, ToppingE = 0;
	const float pizzaLarge = 14.99, pizzaMedium = 12.99, pizzaSmall = 9.99, pepperoni = 0.00, cheese = 0.00, sauage = 0.00;
	bool pizzaConfirm, price = 0;
	int pizzaNumOrder;
	float pizzaTotal = 0, PizzaFinal = 0;
	std::cout << "welcome to Delgados Pizza";
	std::cout << "We have a wide range of pizzas to choose from, \n"
		"would you like to order a pizza? 1 for yes, 2 for no. ";
	std::cin >> pizzaYes;
	if (pizzaYes == 1){
		std::cout << "I am glad you would like a pizza, what size? 1 for small, 2 for medium, \n "
			"3 for large" << std::endl;
		std::cin >> pizzaSize;
	}
	else{
		std::cout << "No pizza for you!" << std::endl;
		system("pause");
		return 0;
	}

	if (pizzaSize == 1)
		std::cout << "Small pizza is 9.99." << std::endl;
	else if (pizzaSize == 2)
		std::cout << "Medium pizza is 12.99" << std::endl;
	else if (pizzaSize == 3)
		std::cout << "Large pizza is 14.99" << std::endl;

	std::cout << "Enter a topping, 1 for pepperoni, 2 for cheese, 3 for sausage" << std::endl;
	std::cin >> Topping;
	
	if (pizzaSize == 1){
		PizzaFinal = 9.99;
		std::cout << "Your total will be " << PizzaFinal << "." << std::endl;
	}
	if (pizzaSize == 2){
		PizzaFinal = 12.99;
		std::cout << "Your total will be " << PizzaFinal << "." << std::endl;
	}
	if (pizzaSize == 3){
		PizzaFinal = 14.99;
		std::cout << "Your total will be " << PizzaFinal << "." << std::endl;
	}

	system("pause");
	return 0;

	}