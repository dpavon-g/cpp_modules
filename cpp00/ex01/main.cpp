#include <iostream>
#include "class.hpp"
void	print_menu() {
	std::cout << "*************" << std::endl;
	std::cout << "* 1. ADD    *" << std::endl;
	std::cout << "* 2. SEARCH *" << std::endl;
	std::cout << "* 3. EXIT   *" << std::endl;
	std::cout << "*************" << std::endl;
}

void	add_contact(Person persona) {
	std::cout << "Adding contact" << std::endl;
	(void)persona;
}

void	search_contact(Person persona[8]) {
	int i;

	i = 0;
	while (i < 8) {
		
		std::cout << "Name: " << persona[i].get_name() << std::endl;
		i++;

	}
	std::cout << "Searching contact" << std::endl;
}

int	main() {
	std::string input;
	int			i;

	i = 0;
	Person persona[8];
	while (input != "EXIT") {
		print_menu();
		std::cout << "Imput a word: ";
		std::getline (std::cin, input);
		if (std::cin.eof()) {
			std::cout << "See you soon!!" << std::endl;
			exit(1);
		}
		if (input == "SEARCH")
			search_contact(persona);
		else if (input == "ADD")
			add_contact(persona[i]);
		i += 1;
		if (i > 7)
			i = 0;
	}
}
