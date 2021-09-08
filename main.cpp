#include <iostream>
#include <string>

void greetUser()
{
	std::string username;
	std::cout << "Hello! How is your name?" << std::endl;
	std::cin >> username;
	std::cout << "Hello, " << username << "!" << std::endl;
}

int main()
{
	greetUser();
	return 0;
}
