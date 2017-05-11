#include <iostream>
#include < cstdlib>
#include <ctime>


int main()

{
	
		int number;
		


		std::cout << "Pick a number between 1 and 10." << std::endl;
		std::cin >> number;
		int chances = 0 +1;
		do{
			srand(static_cast <unsigned int>(time(0))); //generator 
			int randomNumber = rand();
			int die = (randomNumber % 10) + 1;

			std::cout << "The computer chose the number " << die << std::endl;


			if (die == number)
			{
				std::cout << "computer wins " << number << std::endl;
				std::cin >> number;
			}
			else if (die > number)
			{
				std::cout << "Computer chose to high." << std::endl;
			}
			else
			{
				std::cout << "Computer chose to low." << std::endl;
			}

std::cout << "Computer has used" << chances << "of 5 chances" << std::endl;

		} while (chances == 5);
		

	 system("pause");

	return 0; 
}