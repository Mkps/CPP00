/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <aloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:39:42 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/15 16:39:42 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

Contact::Contact() {
	this->current_index = -1;
	this->first_name = "(null)";
	this->last_name = "(null)";
	this->nickname = "(null)";
}

Contact::~Contact() {
}

static std::string format_str(std::string str)
{
	if (str.size() > 10)
	{
		str.resize(9);
		str.append(".");
		return (str);
	}
	while (str.size() < 10)
	{
		str.insert(0, " ");
	}
	return (str);
}

static void AbortMsg(void)
{
    std::cout << "(aborted)" << std::endl;
}

int Contact::SetFirstName(void)
{
	this->first_name.clear();	
	while (this->first_name.empty())
	{
        if (std::cin.good())
		    std::cout << "First name: ";
		if (!std::getline(std::cin, this->first_name))
            return (AbortMsg(), 1);
		if (this->first_name.empty())
			std::cout << "Please input a value\n";
	}
    return (0);
}
int Contact::SetLastName(void)
{
	this->last_name.clear();	
	while (this->last_name.empty())
	{
        if (std::cin.good())
		    std::cout << "Last name: ";
		if (!std::getline(std::cin, this->last_name))
            return (AbortMsg(), 1);
		if (this->last_name.empty())
			std::cout << "Please input a value\n";
	}
    return (0);
}

int Contact::SetNickName(void)
{
	this->nickname.clear();	
	while (this->nickname.empty())
	{
        if (std::cin.good())
		    std::cout << "Nickname: ";
		if (!std::getline(std::cin, this->nickname))
            return (AbortMsg(), 1);
		if (this->nickname.empty())
			std::cout << "Please input a value\n";
	}
    return (0);
}

int Contact::SetPhoneNumber(void)
{
	this->phone_number.clear();	
	while (this->phone_number.empty())
	{
        if (std::cin.good())
		    std::cout << "Phone number: ";
		if (!std::getline(std::cin, this->phone_number))
            return (AbortMsg(), 1);
		if (this->phone_number.empty())
			std::cout << "Please input a value\n";
	}
    return (0);
}

int Contact::SetDarkestSecret(void)
{
	this->darkest_secret.clear();	
	while (this->darkest_secret.empty())
	{
        if (std::cin.good())
		    std::cout << "Darkest Secret: ";
		if (!std::getline(std::cin, this->darkest_secret))
            return (AbortMsg(), 1);
		if (this->darkest_secret.empty())
			std::cout << "Please input a value\n";
	}
    return (0);
}

void Contact::SetIndex(int index)
{
	this->current_index = index;
}

const std::string &Contact::GetFirstName(void) const
{
	return (this->first_name);
}

void	Contact::DisplayContact(void) const
{
	std::cout << std::left << std::setw(18) << std::setfill(' ');
	std::cout << "First name:" << this->first_name << "\n";
	std::cout << std::left << std::setw(18) << std::setfill(' ');
	std::cout << "Last name:" << this->last_name << "\n";
	std::cout << std::left << std::setw(18) << std::setfill(' ');
	std::cout << "Nickname:" << this->nickname << "\n";
	std::cout << std::left << std::setw(18) << std::setfill(' ');
	std::cout << "Phone Number:" << this->phone_number << "\n";
	std::cout << std::left << std::setw(18) << std::setfill(' ');
	std::cout << "Darkest Secret:" << this->darkest_secret << "\n" << std::endl;

}

void	Contact::DisplaySummary(void) const
{
	if (this->current_index == -1)
		return ;
	std::cout << "         " << this->current_index + 1 << "|";
	std::cout << format_str(this->first_name) << "|";
	std::cout << format_str(this->last_name) << "|";
	std::cout << format_str(this->nickname) << std::endl;

}
