#include <iostream>
#include <string> 

int main()
{
	int color, est, bodypart, animal, noun, plural, nameofPerson, adjective, nameofPerson2;

	std::cout << " noun." << std::endl;
	std::cin >> noun; 

	std::cout << " est" << std::endl;
	std::cin >> est;

	std::cout << " bodypart." << std::endl;
	std::cin >> bodypart;

	std::cout << " animal." << std::endl;
	std::cin >> animal;

	std::cout << " noun." << std::endl;
	std::cin >> noun; 

	std::cout << " plural";
	std::cin >> plural; 

	std::cout << "Name 1";
	std::cin >> nameofPerson;

	std::cout << "Name 2";
	std::cin >> nameofPerson2;

	std::cout << "Adjective";
	std::cin >> adjective;


	//story
	std::cout << "Dear Diary, today at school was really ." << noun << std::endl;
	std::cin >> noun;

	std::cout << "My best friend " << nameofPerson << "was being " << adjective << " to me today." << std::endl;
	std::cin >> nameofPerson, adjective;

	std::cout << " She is usually " << adjective << "but today she was " << adjective << " and I am really concerned." <<std::endl;
	std::cin >> adjective;

	std::cout << "At lunch today she did not even sit with me" << std::endl;

	std::cout << "She is probably mad that me and " << nameofPerson2 << "like each other. Oh well. " << std::endl; 
	std::cin >> nameofPerson;
	
	std::cout << "She had the " << est << " crush on him in like 4th grade. We are now in 5th grade. She needs to get over it." << std::endl;
	std::cin >> est;

	std::cout << "Anyways a kid in my class broke his " << bodypart << " on the playground today. It was gross" << std::endl;
	std::cin >> bodypart;

	std::cout << "he said he saw a " << animal << " and ran away from it a fell." << std::endl; 
	std::cin >> animal; 

}	