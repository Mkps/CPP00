/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <aloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:39:51 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/15 16:39:54 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Phonebook.hpp"

Phonebook::Phonebook() : listing(){
	current_index = 0;
	std::cout << "Welcome to MyAwesomePhonebook !"<< std::endl;
}

Phonebook::~Phonebook() {
	std::cout << "Thank you for using MyAwesomePhonebook !" << std::endl;
}

void	Phonebook::AddContact(void)
{
	std::string str;
	int	i;

	if (this->current_index >= 8)
		this->current_index = 0;
	i = this->current_index;
	std::cout << "//** CREATING NEW CONTACT **//\n";
	this->listing[i].SetIndex(i);
	if (this->listing[i].SetFirstName())
        return ;
	if (this->listing[i].SetLastName())
        return ;
	if (this->listing[i].SetNickName())
        return ;
	if (this->listing[i].SetPhoneNumber())
        return ;
	if (this->listing[i].SetDarkestSecret())
        return ;
	std::cout << "//** NEW CONTACT SUCCESSFULLY CREATED **//\n";
	this->current_index++;
}
void	Phonebook::DisplayAllContacts(void)
{
	std::cout << "     Index| FirstName|  LastName|  Nickname" << std::endl;
	for (int i = 0; i < 8; i++)
		this->listing[i].DisplaySummary();
}

const Contact & Phonebook::SearchContact(int index)
{
	return (this->listing[index - 1]);
}
