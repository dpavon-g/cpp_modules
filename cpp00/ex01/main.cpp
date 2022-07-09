#include <iostream>
#include "class.hpp"

void	print_menu() {
	std::cout << "*************" << std::endl;
	std::cout << "* 1. ADD    *" << std::endl;
	std::cout << "* 2. SEARCH *" << std::endl;
	std::cout << "* 3. EXIT   *" << std::endl;
	std::cout << "*************" << std::endl;
}

void	add_contact(Person &persona) {
	std::string input;
	
	std::cout << "NAME: ";
	std::getline(std::cin, input);
	persona.set_name(input);
	
	std::cout << "LAST NAME: ";
	std::getline(std::cin, input);
	persona.set_last_name(input);

	std::cout << "NICKNAME: ";
	std::getline(std::cin, input);
	persona.set_nickname(input);

	std::cout << "PHONE NUMBER: ";
	std::getline(std::cin, input);
	persona.set_phone(input);
	
	std::cout << "DARKEST SECRET: ";
	std::getline(std::cin, input);
	persona.set_secret(input);

	std::cout << "Adding contact" << std::endl;
}

int	strlen(std::string str) {
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	write_space(int num)
{
	int i;

	i = 0;
	while (i + num < 10)
	{
		std::cout << " ";
		i++;
	}
	return (num);
}

void	print_dates(Person persona, std::string (Person::*func)()){
	int j;
	j = 0;
	if (write_space(strlen((persona.*func)())) <= 10)
		std::cout << (persona.*func)() << "|";
	else {
		while(j < 9) {
			std::cout << ((persona.*func)())[j];
			j++;
		}
		std::cout << "." << "|";
	} 

}

int		check_num_err(std::string str) {
	
	if (strlen(str) != 1)
		return (1);

	return (0);

}

void	search_contact(Person persona[8]) {
	int	i;
	int	j;
	std::string input;

	i = 0;
	while (i < 8) {
		std::cout << "|         " << persona[i].get_id() << "|";
		j = 0;
		print_dates(persona[i], &Person::get_name);
		print_dates(persona[i], &Person::get_last_name);
		print_dates(persona[i], &Person::get_nickname);
		print_dates(persona[i], &Person::get_phone);
		std::cout << "\n";
		i++;
	}


	std::cout << "Imput a user ID: ";
	std::getline (std::cin, input);
	
	while (check_num_err(input)) {
		std::cout << "Invalid user ID, repeat: ";
		std::getline (std::cin, input);
	}


	std::cout << "Searching contact" << std::endl;
}

int	main() {
	std::string input;
	int			i;
	
	i = 1;
	Person persona[8];
	while (i < 9) {
		persona[i - 1].set_id(i);
		i++;
	}
	i = 0;
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
		else if (input == "ADD") {
			add_contact(persona[i]);
			i++;
		}
		if (i > 7)
			i = 0;
	}
}
