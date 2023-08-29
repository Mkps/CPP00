#include "../inc/MAP.hpp"

int main(void)
{
	Phonebook	PB;
	std::string str;
	int			select_index;
	str.clear();
	
	while (str.compare("EXIT"))
	{
		std::cout << "Available commands are: ADD | SEARCH | EXIT." << std::endl;
		std::cin.clear();
		str.clear();
		std::getline(std::cin, str);
		if (!str.compare("ADD"))
			PB.AddContact();
		else if (!str.compare("SEARCH"))
		{
			select_index = -1;
			while (select_index == -1)
			{
				std::cout << "Press 0 to go back to the selection menu.\nSelect an entry: " << std::endl;
				PB.DisplayAllContacts();
				std::cin >> select_index;
				if (select_index == 0 && std::cin.good())
				{
					std::cout << "Aborting SEARCH" << std::endl;
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
				else if (select_index < 1 || select_index > 8)
				{
					std::cout << "Invalid input. Please provide a number between 1 and 8." << std::endl;
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					select_index = -1;
				}
				else if (PB.SearchContact(select_index).GetFirstName() == "(null)")
				{
					std::cout << "Index does not contain any entry." << std::endl;
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					select_index = -1;
				}
				else
				{
					PB.SearchContact(select_index).DisplayContact();
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				}
			}

		}
	}
	return (0);
}
