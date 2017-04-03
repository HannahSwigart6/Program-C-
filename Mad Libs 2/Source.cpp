#include <iostream>
#include <string> 

int main()
{
	const int GOLD_PIECES = 900;
	int adventure, Killed, survivors, year;
	std::string leader, boat;

	//get the information 
	std::cout << "Welcome to lost Fortune" << std::endl;
	std::cout << " Please enter the following for your personalized adventure" << std::endl;

	std::cout << "Enter the number of Adventures in your party: ";
	std::cin >> adventure;

	std::cout << "Enter a number , smaller then the first ";
	std::cin >> Killed;

	survivors = adventure - Killed;
	year = adventure + Killed;
	std::cout << "Enter your last name: ";
	std::cin >> leader;

	std::cout << "Enter a noun: ";
	std::cin >> boat;

	std::cout << "Enter a number: ";
	std::cin >> year;

	//The story so far.
	std::cout << "\nA brave group of " << adventure << "set out on a quest " << std::endl;
	std::cout << "-- in search of the lost treasure of the acient Dwarves " << std::endl;
	std::cout << "The group was led by the legendary Paladin" << leader << std::endl;

	std::cout << "\nAlong the way, a band of marurding orges ambused the party. " << std::endl;
	std::cout << "All fought bravely under the command of  " << leader << std::endl;
	std::cout << ", and the ogers were defeted, but at a cost." << std::endl;
	std::cout << "Of the adventure " << Killed << "were vanquished, " << std::endl;

	std::cout << "leaving just " << survivors << "in the group.\n " << std::endl; 
	std::cout << "\nThe party was about to give up all hope." << std::endl;
	std::cout << "But while laying the deceased to rest, " << std::endl;
	std::cout << "they stumbled upon a buried fortune." << std::endl;
	std::cout << "So the adventures split" << GOLD_PIECES << "gold pieces." << std::endl;
	std::cout << leader << "held on to the extra " << (GOLD_PIECES % survivors) << std::endl;
	std::cout << "pieces to keep thing fair of course.\n";
	std::cout << " The leader " << leader << "left on the great boat " << boat << std::endl;
	std::cout << "And was not seen for " << year << " years " << std::endl;
}