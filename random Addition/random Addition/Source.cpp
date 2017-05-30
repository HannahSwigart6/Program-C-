#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int getRandomNumber(){
	int  randInteger = 1 + rand() % (10 - 1 + 1);
	return randInteger;
}
int getRandomNumber1(){
	int  randInteger = 1 + rand() % (10 - 1 + 1);
	return randInteger;
}
int main()
{//variables
	int num1 = 0;
	int num2 = 0;
	int correctAnswer = 0;
	int userAnswer = 0;
	int score = 0, wrong = 0;
	
	

	// rand Function
	srand(static_cast<int>(time(0)));

	
		for (int x = 0; x <= 6;x = x+1)
		{
			num1 = getRandomNumber();
			num2 = getRandomNumber1();
			correctAnswer = num1 + num2;

			std::cout << "What is the sum of " << num1 << " + " << num2 << " ?";
			cin >> userAnswer;

			if (userAnswer == correctAnswer)
			{
				std::cout << "Correct";
				++score;
			}
			if (userAnswer != correctAnswer){
				std::cout << "Sorry, the correct answer is " << correctAnswer << ".";
				--wrong;
			}
			std::cout << endl << endl;


		}
		std::cout << "You got " << score <<" right"<< std::endl;
		std::cout << "you got " << wrong << " wrong" << std::endl;
	system("Pause");
	return 0;
}