#include <iostream>
#include <string>
int main (){
	int someNumbers[6] = { 2, 6, 14, 23, 35, 47 };
	int result=0;
	int average;
	int lowestScore = 100;
	int odd = 2;

	int score = 0;
	for (int i = 0; i < 6; ++i)
	{
		result = someNumbers[i] + result;
		average = result / 6;
		std::cout << result << std::endl;

		if (someNumbers[i] >= score)
		{
			score = someNumbers[i];
		}
		if (someNumbers[i] <= lowestScore)
		{
			lowestScore = someNumbers[i];
		}
		if (someNumbers[i] % odd !=0)
		{
			std::cout << someNumbers[i] << " is an odd number for sure "<<std::endl;
		}
	}
	std::cout << "The average is " << average << std::endl;
	std::cout << "highscore is " << score << std::endl;
	std::cout << "The lowest score is " << lowestScore << std::endl;

	/*for (int x = 0; x < 5; ++x)
	{
		result = anotherNumber + result;
		average = result / 5;
		std::cout << result<<std::endl;
		
	}
	std::cout << average << std::endl;*/

}