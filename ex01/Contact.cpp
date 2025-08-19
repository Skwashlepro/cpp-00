/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:04:55 by luctan            #+#    #+#             */
/*   Updated: 2025/08/19 02:12:49 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::_fields[5] = {
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

Contact::Contact() {
	for (int i = 0; i <= DarkestSecret; i++)
		this->_info[i] = std::string();
	return;
}

Contact::~Contact() {}

void	Contact::get_contact() {
	std::cout << "\n";
	for (int i = 0; i <= DarkestSecret; i++) {
		std::cout << this->_fields[i] << " : " << this->_info[i] << "\n";
	}
	std::cout << std::endl;
}

std::string	Contact::formatTab(const std::string &str) const {
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str + std::string(10 - str.length(), ' '));
}

void	Contact::PrintTab(int index) const {
	if (index == 1)
		std::cout << "|   N      | First Nm | Last  Nm | Nickname |\n";
	std::cout << "|" << formatTab(std::to_string(index))
			<< "|" << formatTab(_info[FirstName])
			<< "|" << formatTab(_info[LastName])
			<< "|" << formatTab(_info[NickName])
			<< "|" << std::endl;
}

bool	Contact::set_contact() {
	for (int i = 0; i <= DarkestSecret; i++) {
		while (1) {
			std::cout << "Please enter the contact's " << _fields[i] << std::endl;
			std::cout << ">> ";
			std::getline(std::cin, this->_info[i]);
			if (!std::cin && std::cin.eof()) {
				return (true);
			}
			if (this->_info[i].length() == 0) {
				std::cout << _fields[i] << " cannot be empty" << std::endl;
				continue ;
			}
			break ;
		}
	}
	std::cout << "Contact " << this->_info[LastName] << " " << this->_info[FirstName] << " added" << std::endl;
	return (true);
}
