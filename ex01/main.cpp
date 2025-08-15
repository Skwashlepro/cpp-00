/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 19:59:52 by luctan            #+#    #+#             */
/*   Updated: 2025/08/14 21:47:04 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string input;

	while (1)
	{
		phoneBook.print_instructions();
		std::cout << ">> ";
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
		phoneBook.set_info();
		else if (!input.compare("SEARCH"))
		phoneBook.get_info();
		else if (std::cin.eof() || !input.compare("EXIT")) {
			std::cout << "Exiting ..." << std::endl;
			std::exit(0);
		}
		input.clear();
	}
	return (0);
}
