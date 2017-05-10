#include <iostream>
#include <string>

int main()
{
	double fwt = 0.20, fica = 0.08, stateIncome = 0.04;
	double weeklyGross, deduct, totalNet;


	std::cout << "What is the employees weekly pay?" << std::endl; 
	std::cin >> weeklyGross;
 

	deduct = weeklyGross*fwt + weeklyGross * fica + weeklyGross * stateIncome;

	totalNet = weeklyGross - deduct;

	std::cout << "Your paycheck is $" << totalNet << std::endl;


	system("Pause");
		return 0;
}