 
#include "../inc/Phonebook.class.hpp"

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
	this->listing[i].SetFirstName();
	this->listing[i].SetLastName();
	this->listing[i].SetNickName();
	this->listing[i].SetPhoneNumber();
	this->listing[i].SetDarkestSecret();
	std::cout << "//** NEW CONTACT SUCCESSFULLY CREATED **//\n";
	this->current_index++;
}
void	Phonebook::DisplayAllContacts(void)
{
	std::cout << "#| FirstName|  LastName|  Nickname|" << std::endl;
	for (int i = 0; i < 8; i++)
		this->listing[i].DisplaySummary();
}

Contact Phonebook::SearchContact(int index)
{
	return (this->listing[index - 1]);
}
