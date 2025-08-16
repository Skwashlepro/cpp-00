/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 19:31:02 by luctan            #+#    #+#             */
/*   Updated: 2025/08/15 15:18:18 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <string>
# include <iomanip>
# include <iostream>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int		_index;
		bool	_full;
	public:
		PhoneBook();
		~PhoneBook();
		void	set_info();
		void	get_info();
		void	print_tab();
};

#endif
