// program to find countries in Pete's World
// date November 2022
// author Pete Lowe
// Ian Perez Bunuel 
// Karol Loughlin
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}


	std::cout << "Pick a letter from A to C or X to Z" << std::endl; // change this line each iteration

	std::cout << "Pick a letter from A to B or W to Z" << std::endl; // change this line each iteration


	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{ 
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0; 
		}		
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}

	}

	if (letter == 'b' || letter == 'B') // Written by Ian
	{
		if (region == 1)
		{
			std::cout << "Belize, Bermuda, Bolivia, Brazil" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Berlarus, Belgium, Bosnia and Herzegovina, Bulgaria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Benin, Botswana, Burkina Faso, Burundi" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Bangladesh, Bhutan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Bahamas, Bahrain Arabian, Barbados, " << std::endl;
		}
	}
	if (letter == 'c' || letter == 'C')
	{
		if (region == 1)
		{
			std::cout << "Canada, Chile, Colombia, Costa Rica" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Croatia Balkan Peninsula, Czech Republic" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Cameroon, Cape Verde, Central African Republic, Chad, Comoros, Democratic Republic of the Congo, Congo, Republic of (Brazzaville), Côte D'ivoire" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Cambodia, China, Christmas Island, Cocos (Keeling) Islands, Cyprus Mediterranean" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Cayman Islands Greater Antilles, Cook Islands, Cuba Greater Antilles" << std::endl;
		}
	}
	if (letter == 'v' || letter == 'V') // Added by Karol
	{
		if (region == 1)
		{
			std::cout << "Virgin Islands (US and UK), Venezuela" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Vatican City State" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There is no V's in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Vietnam" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Vanuatu" << std::endl;
		}
	}
	if (letter == 'w' || letter == 'W')
	{
		if (region == 1)
		{
			std::cout << "There is no W's in the Americas." << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There is no W's in the EU." << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Western Sahara" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There is no W's in Asia." << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Wallis and Futuna Islands" << std::endl;
		}
	}

	if (letter == 'x' || letter == 'X')
	{
		std::cout << "There is no country starting with X. Try again." << std::endl;

	}

	if (letter == 'y' || letter == 'Y') //Written by Karol
	{
		if (region == 1)
		{
			std::cout << "There are no Y's in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Y's in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There is no Y's in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There is no Y's in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Yemen" << std::endl;
		}
	}

	if (letter == 'z' || letter == 'Z') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Aisa" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}

	}
	
	
	
	return 1;
}