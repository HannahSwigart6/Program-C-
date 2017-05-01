#include <iostream>
#include <string>

int main()
{	
	int choice, RoomChoice, phone;
	float perNight = 100, oneTimeRoom = 35, phoneTotal, nightTotal, telephone = 0.25;
	int nights, phoneMin;
	std::cout << "Welcome to Bate's Hotel." << std::endl;
	std::cout << "Will you be staying with us? 1 Yes or 2 No";
	std::cin >> choice;

	while (choice == 1)
	{
		std::cout << "How many nights are yo going to stay?";
		std::cin >> nights;
		nightTotal = perNight * nights;
	
		std::cout << "While you are staying in the room would you like to use the phone? Yes or No ";
		std::cin >> phone;
		if (phone == 1){
			std::cout << "How many minutes on the phone?";
			std::cin >> phoneMin;
			phonetotal = telephone * phoneMin;
		}

		std::cout << "Did you use room service? 1 Yes or 2 No";
		std::cin >> oneTimeRoom;

		if (RoomChoice == 1)
		{
			std::cout << "That cost is $35\n";
			std::cout << "Total cost for your stay is $" << nightTotal + phonetotal + roomService << endl;
		}
		if (choice == "No" || choice == "no")
		{
			std::cout << "I guess you are to good for my hotel.\n";
		}
		else if (RoomChoice == 2)
		{
			std::cout << "Total cost for your stay is $" << nightTotal + phoneTotal << endl;
		}
		else
		{
			std::cout << "Total cost for your stay is $" << nightTotal << endl;
		std::cout << "Would you be staying with us again?  1 Yes or 2 No";
		std::cin >> choice;
			}
		
	}
}




