#include <iostream>

int main()
{
	char grade = ' ';
	// enter grade
	
		std::cout << "Enter a letter grade:";
	std::cin >> grade;
	grade = toupper(grade);

	switch (grade)
	{
	case 'A':
		std::cout << "Excellent\n";
		break;
	case 'B':
			std::cout << "Above average.\n";
			break;
	case 'C':
				std::cout << "Below average.\n";
				break;
	case'D':
	case'F':
				std::cout << "You need help.\n";
				break;
	default:
				std::cout << "Invalid grade\n";
	} //end switch

	system("pause");
		return 0;
}