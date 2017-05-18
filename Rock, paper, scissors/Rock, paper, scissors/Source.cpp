#include <iostream>
#include <string>

int main(){

int rock = 1, paper = 2, scissors = 3, userChoose, computer;
int chance = 0 + 1;
do {
	std::cout << "1 for rock ,2 for paper or 3 for scissors?" << std::endl;
	std::cin >> userChoose;

	computer = rand() % 3 + 1;

	if (userChoose == 1 && computer == 1)
	{
		std::cout << "It's a tie!" << std::endl;
	}
	else if (userChoose == 1 && computer == 2)
	{
		std::cout << "You lose!" << std::endl;
	}
	else if (userChoose == 1 && computer == 3)
	{

		std::cout << "You win!" << std::endl;

	}

	if (userChoose == 2 && computer == 2)
	{
		std::cout << "It's a tie!" << std::endl;
	}
	else if (userChoose == 2 && computer == 3)
	{
		std::cout << "You lose!" << std::endl;
	}
	else if (userChoose == 2 && computer == 1)
	{

		std::cout << "You win!" << std::endl;

	}


	if (userChoose == 3 && computer == 3)
	{
		std::cout << "It's a tie!" << std::endl;
	}
	else if (userChoose == 3 && computer == 1)
	{
		std::cout << "You lose!" << std::endl;
	}
	else if (userChoose == 3 && computer == 2)
	{

		std::cout << "You win!" << std::endl;

	}
} while (chance = 5);
}