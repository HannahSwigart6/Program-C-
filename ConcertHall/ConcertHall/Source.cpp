#include <iostream>
#include <string> 

int main()
{
	double Orchestra = 25.00;
	double Main = 30.00;
	double Balcony = 15.00;

	double OrchestraTotal, MainTotal, BalconyTotal;
	double OrchestraOrder, MainOrder, BalconyOrder;
	double Total;

	
	std::cout << "How many tickets were sold for Orchestra seats?" << std::endl;
	std::cin >> OrchestraOrder;

	std::cout << "How many tickets were sold for Main seats?" << std::endl;
	std::cin >> MainOrder;

	std::cout << "How many tickets were sold for Balcony seats?" << std::endl;
	std::cin >> BalconyOrder;


	OrchestraTotal = Orchestra * OrchestraOrder;
	MainTotal = Main * MainOrder;
	BalconyTotal = Balcony * BalconyOrder;
	Total = OrchestraTotal + MainTotal + BalconyTotal;

	std::cout << "Percentage of Orchestra: " << (OrchestraTotal / 100) << std::endl;
	std::cout << "Percentage of Main: " << (MainTotal / 100) << std::endl;
	std::cout << "Percentage of Balcony: " << (BalconyTotal / 100) << std::endl; 

	std::cout << "Orchestra Total: " <<OrchestraTotal<< std::endl;
	std::cout << "Main Total: " <<MainTotal<< std::endl;
	std::cout << " Balcony Total: " <<BalconyTotal<< std::endl;
	std::cout << "Total: " << Total << std::endl; 

}