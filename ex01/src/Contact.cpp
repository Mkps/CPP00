#include "../inc/Contact.hpp"

Contact::Contact() {
	this->current_index = -1;
	this->first_name = "(null)";
	this->last_name = "(null)";
	this->nickname = "(null)";
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

void	Contact::SetFirstName(void)
{
	this->first_name.clear();	
	while (this->first_name.empty())
	{
		std::cout << "First name: ";
		std::getline(std::cin, this->first_name);
		if (this->first_name.empty())
			std::cout << "Please input a value\n";
	}
}
void	Contact::SetLastName(void)
{
	this->last_name.clear();	
	while (this->last_name.empty())
	{
		std::cout << "Last name: ";
		std::getline(std::cin, this->last_name);
		if (this->last_name.empty())
			std::cout << "Please input a value\n";
	}
}

void	Contact::SetNickName(void)
{
	this->nickname.clear();	
	while (this->nickname.empty())
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, this->nickname);
		if (this->nickname.empty())
			std::cout << "Please input a value\n";
	}
}
void	Contact::SetPhoneNumber(void)
{
	this->phone_number.clear();	
	while (this->phone_number.empty())
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, this->phone_number);
		if (this->phone_number.empty())
			std::cout << "Please input a value\n";
	}
}
void	Contact::SetDarkestSecret(void)
{
	this->darkest_secret.clear();	
	while (this->darkest_secret.empty())
	{
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, this->darkest_secret);
		if (this->darkest_secret.empty())
			std::cout << "Please input a value\n";
	}
}
void Contact::SetIndex(int index)
{
	this->current_index = index;
}

std::string Contact::GetFirstName(void)
{
	return (this->first_name);
}
void	Contact::DisplayContact(void)
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

void	Contact::DisplaySummary(void)
{
	if (this->current_index == -1)
		return ;
	std::cout << this->current_index + 1 << "|";
	std::cout << format_str(this->first_name) << "|";
	std::cout << format_str(this->last_name) << "|";
	std::cout << format_str(this->nickname) << "|" << std::endl;

}
Contact::~Contact() {
}
