#include <iostream>
#include <string>
int main()
{
	unsigned long computerbarcode;
	int done;
	do {
	std::cout << "Scan compter bar code. \n";
	std::cin >> computerbarcode;
	
	
		switch (computerbarcode)
		{
		case 99732:
			std::cout << "Dusty computer \n";
			break;
		
		case 99720:
			std::cout << "Hannah computer\n";
			break;
		
		case 99724:
			std::cout << "Kayla computer\n";
			break;
		case 99718:
			std::cout << "zach computer\n";
			break;
		
		case 99727:
			std::cout << "Chase computer\n";
			break;
		case 99733:
			std::cout << "Chance computer\n";
			break;
		case 99715:
			std::cout << "Glenn computer\n";
			break;
		case 99735:
			std::cout << "Trey computer\n";
			break;
		case 99721:
			std::cout << "Gairren computer\n";
			break;
		case 99738:
			std::cout << "Dipesh computer\n";
			break;
		case 99717:
			std::cout << "Andrew computer\n";
			break;
default:
			std::cout << "Invalid computer";
		}
		std::cout << "would you like to scan again?\n";
		std::cin >> done;
	} while (done == 1);
	system("pause");
	return 0;
}