/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luctan <luctan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 20:01:04 by luctan            #+#    #+#             */
/*   Updated: 2025/08/15 15:05:26 by luctan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H

# define CONTACT_H

# include <string>
# include <iomanip>
# include <iostream>
# include <cstdlib>

class Contact{
	private:
		static std::string	_fields[5];
		std::string			_info[5];

		enum Field {
			FirstName = 0,
			LastName,
			NickName,
			PhoneNumber,
			DarkestSecret
		};
	public:
		Contact();
		~Contact();

		bool	set_contact();
		void	get_contact();
};

#endif
