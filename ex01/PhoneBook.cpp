/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 19:31:06 by luctan            #+#    #+#             */
/*   Updated: 2025/08/19 02:19:10 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _full(0), _index(0){}

PhoneBook::~PhoneBook() {}

void	PhoneBook::set_info()
{
	std::string input;

	if (this->_index >= 8)
		this->_full = true;
	int	idx = this->_index % 8;
	if (!this->_full) {
		std::cout << "Creating contact no." << this->_index + 1 << std::endl;
		this->contacts[idx].set_contact();
		this->_index++;
	}
	else {
		std::cout << "Creating a new contact will erase the oldest one you've created." << std::endl;
		std::cout << "Confirm ? Y/y" << std::endl;
		std::getline(std::cin, input);
		if (input == "Y" || input == "y") {
			this->contacts[idx].set_contact();
			this->_index++;
		}
		else
			std::cout << "back to the main menu." << std::endl;
	}
}

bool	PhoneBook::get_info()
{
	int	index;
	std::string input;

	if (this->_index == 0) {
		std::cout << "Please add at least one contact to your PhoneBook" << std::endl;
		return (true);
	}
	else {
		for (int i = 0; i < _index && i < 8; i++)
			contacts[i].PrintTab(i + 1);
		std::cout << std::endl;
	}
	while (true) {
		std::cout << "Contact's index to display : ";
		std::getline(std::cin, input);
		bool isNumeric = true;
		for (std::string::size_type i = 0; i < input.length(); i++)
			if (!isdigit(input[i]))
				isNumeric = false;
		if (std::cin.eof())
			return (false);
		if (isNumeric == false || input.length() == 0 || input.length() > 1) {
			std::cout << "Please only choose between 1 and " << this->_index << std::endl;
			continue;
		}
		int index = std::stoi(input);
		if (index == 0)
			return (true);
		if ((index > this->_index || index > 8) && !this->_full) {
			std::cout << "Please only choose between 1 and " << this->_index << std::endl;
			continue;
		}
		else if (index > 8 && this->_full)
			std::cout << "Please only choose between 1 and " << 8 << std::endl;
		this->contacts[index - 1].get_contact();
		break;
	}
	return (true);
}
