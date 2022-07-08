#include <iostream>
#include "class.hpp"
void	print_menu() {
	std::cout << "*************" << std::endl;
	std::cout << "* 1. ADD    *" << std::endl;
	std::cout << "* 2. SEARCH *" << std::endl;
	std::cout << "* 3. EXIT   *" << std::endl;
	std::cout << "*************" << std::endl;
}

void	add_contact() {
	std::cout << "Adding contact" << std::endl;
}

void	search_contact() {
	std::cout << "Searching contact" << std::endl;
}

int	main() {
	std::string input;

	Person persona1;

	while (input != "EXIT") {
		print_menu();
		std::cout << "Imput a word: ";
		std::getline (std::cin, input);
		if (std::cin.eof())
			exit(1);
		persona1.set_name(input);
		std::cout << "You entered: " << persona1.get_name() << "." << std::endl;
		
	}
}
