#include <iostream>
#include <string>
int main()
{
	std::cout << "Ange namn:" << std::endl;
	std::string name;
	std::string code;
	std::cin >> name;

	std::cout << "Ditt namn är: " << name << std::endl;
	while (true)
	{
		std::cout << "Ange kod:" << std::endl;
		std::cin >> code;
		if (code == "exit")
		{
			break;
		}
		else
		{
			std::cout << "Fel kod : " << code << std::endl;
		}
		
	}
	std::cout << "Du har gjort : " << code << std::endl;
	return 0;
}