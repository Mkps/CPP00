/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <aloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:40:00 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/15 16:40:01 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream> 
# include <string>
# include <iomanip>
# include <limits>
# include <cstdlib>

class Contact {
public:
	Contact();
	~Contact();

	int         SetFirstName(void);
	int         SetLastName(void);
	int         SetNickName(void);
	int         SetPhoneNumber(void);
	int         SetDarkestSecret(void);
	void        SetIndex(int index);
	void        GetIndex(void);
	const std::string	&GetFirstName(void) const;
	const std::string	&GetLastName(void);
	const std::string	&GetNickName(void);
	const std::string	&GetPhoneNumber(void);
	const std::string	&GetDarkestSecret(void);

	void		DisplayContact(void) const;
	void		DisplaySummary(void) const;

private:
	int			current_index;
	std::string	first_name;
	std::string	last_name;	
	std::string	nickname;	
	std::string	phone_number;	
	std::string	darkest_secret;	
};

#endif
