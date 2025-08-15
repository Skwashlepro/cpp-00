/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 19:31:06 by luctan            #+#    #+#             */
/*   Updated: 2025/08/15 15:10:14 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _full(0), _index(0){}

PhoneBook::~PhoneBook() {}

void	PhoneBook::set_info()
{
	std::string input;

	std::cout << "Creating contact no." << this->_index + 1 << std::endl;
	if (!this->contacts[_index].set_contact())
		std::cout << "back to the main menu." << std::endl;
	else
		this->_index++;
}

void	PhoneBook::get_info()
{
	int	index;
	std::string input;

	if (this->_index == 0) {
		std::cout << "Please add at least one contact to your PhoneBook" << std::endl;
		return ;
	}
	while (true) {
		std::cout << "Contact's index to display : ";
		std::getline(std::cin, input);
		bool isNumeric = true;
		for (std::string::size_type i = 0; i < input.length(); i++)
			if (!isdigit(input[i]))
				isNumeric = false;
		if (isNumeric == false || input.length() == 0)
			std::cout << "Please only choose between 1 and " << this->_index << std::endl;
		int index = std::stoi(input);
		if (index > this->_index) {
			std::cout << "Please only choose between 1 and " << this->_index << std::endl;
			continue;
		}
		this->contacts[index - 1].get_contact();
		break;
	}
}
void	PhoneBook::print_instructions()
{
	std::cout << "Commands: ADD, SEARCH, EXIT" << std::endl;
}
