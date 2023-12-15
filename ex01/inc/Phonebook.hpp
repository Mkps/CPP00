/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <aloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:40:11 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/15 16:40:20 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream> 
# include <string>
# include <iomanip>
# include <limits>
# include "Contact.hpp"

class Phonebook {
public:
	Phonebook();
	~Phonebook();
	void 	AddContact(void);
	const Contact & SearchContact(int index);
	void	DisplayAllContacts(void);

private:
	Contact listing[8];
	int		current_index;
};

#endif
