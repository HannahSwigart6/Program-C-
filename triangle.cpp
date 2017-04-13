#include <iostream>
#include <string> 
#include <cmath>
#include <math.h>
int main(){
	//int rightTriangle/*, isoscelesTriangle, equilateralTriangle*/;
	double aSide, bSide, cSide;
	std::string chooseYourTriangle, Side, perimeter;
	std::cout << "what kind of triangle are you solving? Right triangle, Iscosceles triangle, or Equilateral triangle." << std::endl;
	std::cin >> chooseYourTriangle;

	if (chooseYourTriangle == "Right" || chooseYourTriangle == "right")
	{
		std::cout << "What side are you solving for? Side A, B, or C." << std::endl;
		std::cin >> Side;
		if (Side == "A" || Side == "a")
		{
			std::cout << "Put in the number for side B and side C." << std::endl;
			std::cin >> bSide;
			std::cin >> cSide;
			aSide = sqrt ((bSide * bSide) + (cSide * cSide));
			std::cout << "A side is " << aSide << std::endl;
		
			
		}
		if (Side == "b" || Side == "B")
		{
			std::cout << "Put in the number for side A and side C." << std::endl;
			std::cin >> aSide;
			std::cin >> cSide;
			bSide = sqrt((aSide * bSide) + (cSide * cSide));
			std::cout << "B side is " << bSide << std::endl;
		}
		if (Side == "C" || Side == "c")
		{
			std::cout << "Put in the number for side A and side C." << std::endl;
			std::cin >> aSide;
			std::cin >> bSide;
			cSide = sqrt((aSide * bSide) + (bSide * bSide));
			std::cout << "C side is " << cSide << std::endl;
		}
		
	}
	{
		if (chooseYourTriangle == "Iscosceles" || chooseYourTriangle == "iscosceles")
		{
			std::cout << "What side are you solving for? Side A, B, or C." << std::endl;
			std::cin >> Side;
			if (Side == "A" || Side == "a")
			{
				std::cout << "Put in the number for side B and side C." << std::endl;
				std::cin >> bSide;
				std::cin >> cSide;
				aSide = sqrt((bSide * bSide) + (cSide * cSide));
				std::cout << "A side is " << aSide << std::endl;
			}
			if (Side == "b" || Side == "B")
			{
				std::cout << "Put in the number for side A and side C." << std::endl;
				std::cin >> aSide;
				std::cin >> cSide;
				bSide = sqrt((aSide * bSide) + (cSide * cSide));
				std::cout << "B side is " << bSide << std::endl;
			}
			if (Side == "C" || Side == "c")
			{
				std::cout << "Put in the number for side A and side C." << std::endl;
				std::cin >> aSide;
				std::cin >> bSide;
				cSide = sqrt((aSide * bSide) + (bSide * bSide));
				std::cout << "C side is " << cSide << std::endl;
			}
		}

	}
	if (chooseYourTriangle == "Equilateral" || chooseYourTriangle == "equilateral")
	{
		std::cout << "What side are you solving for? Side A, B, or C." << std::endl;
		std::cin >> Side;
		if (Side == "A" || Side == "a")
		{
			std::cout << "Put in the number for side B and side C." << std::endl;
			std::cin >> bSide;
			std::cin >> cSide;
			aSide = sqrt((bSide * bSide) + (cSide * cSide));
			std::cout << "A side is " << aSide << std::endl;
		}
		if (Side == "b" || Side == "B")
		{
			std::cout << "Put in the number for side A and side C." << std::endl;
			std::cin >> aSide;
			std::cin >> cSide;
			bSide = sqrt((aSide * bSide) + (cSide * cSide));
			std::cout << "B side is " << bSide << std::endl;
		}
		if (Side == "C" || Side == "c")
		{
			std::cout << "Put in the number for side A and side C." << std::endl;
			std::cin >> aSide;
			std::cin >> bSide;
			cSide = sqrt((aSide * bSide) + (bSide * bSide));
			std::cout << "C side is " << cSide << std::endl;
		}
		std::cout << " The perimeter is " << std::endl;
		std::cin >> perimeter;
		perimeter = aSide + bSide + cSide;
	}
}
