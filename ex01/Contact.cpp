/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:04:55 by luctan            #+#    #+#             */
/*   Updated: 2025/08/13 19:11:28 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::_fields[5] =
{
	"First Name",
	"Last Name",
	"Nickname",
	"Phone Number",
	"Darkest Secret"
};

Contact::Contact()
{
	for (int i = 0; i <= DarkestSecret; i++)
		this->_info[i] = std::string();
	return;
}

Contact::~Contact() {}

void	Contact::get_contact(int index) const
{
}

bool	Contact::set_contact()
{
	for (int i = 0; i <= DarkestSecret; i++)
	{
		while (1) {
			if (this->_info[i].compare("Q"))
				return (false);
			std::cout << "Please enter the contact's " << _fields[i] << std::endl;
			std::getline(std::cin, this->_info[i]);
			if (this->_info[i].length() == 0) {
				std::cout << _fields[i] << " cannot be empty" << std::endl;
				std::cout << "to cancel enter 'Q'" << std::endl;
				continue ;
			}
			break ;
		}
	}
	std::cout << "Contact " << this->_info[LastName] << this->_info[FirstName] << "added" << std::endl;
	return (true);
}
