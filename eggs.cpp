<<<<<<< HEAD
#include <iostream>
#include <string> 

int main()
{
	int eggs, remainder, dozen;
	double eggPrice, dozenPrice, totalPrice, total;

	std::cout << "How many eggs would you like?" << std::endl;
	std::cin >> eggs;

	


	dozen = (eggs / 12);
	remainder = (eggs % 12) ;
	eggPrice = remainder * 0.25;
	dozenPrice = dozen * 2.50;
	total = dozenPrice + eggPrice;
	std::cout << "Total is " << total << std::endl;

	system("pause");
	return 0;

=======
#include <iostream>
#include <string> 

int main()
{
	int eggs, remainder, dozen;
	double eggPrice, dozenPrice, totalPrice, total;

	std::cout << "How many eggs would you like?" << std::endl;
	std::cin >> eggs;

	


	dozen = (eggs / 12);
	remainder = (eggs % 12) ;
	eggPrice = remainder * 0.25;
	dozenPrice = dozen * 2.50;
	total = dozenPrice + eggPrice;
	std::cout << "Total is " << total << std::endl;

	system("pause");
	return 0;

>>>>>>> origin/master
}