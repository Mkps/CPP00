/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <aloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:39:46 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/15 16:39:47 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MAP.hpp"

static void SearchMenu(Phonebook &PB)
{
	int			select_index;
    std::string  input;

    select_index = -1;
    while (select_index == -1)
    {
        std::cout << "-------------------------------------------" << std::endl;
        PB.DisplayAllContacts();
        std::cout << "-------------------------------------------" << std::endl;
        std::cout << "Press 0 to go back to the selection menu.\nSelect an entry: " << std::endl;
        if (!std::getline(std::cin, input))
            return ;
        std::cin.clear();
        if (!input.compare("0"))
        {
            std::cout << "//** ABORTING SEARCH **//" << std::endl;
            return ;
        }
        if (input.length() == 1)
            select_index = atoi(input.c_str());
        if (select_index < 1 || select_index > 8)
        {
            std::cout << "Invalid input. Please provide a number between 1 and 8." << std::endl;
            select_index = -1;
        }
        else if (PB.SearchContact(select_index).GetFirstName() == "(null)")
        {
            std::cout << "Index does not contain any entry." << std::endl;
            select_index = -1;
        }
        else
            PB.SearchContact(select_index).DisplayContact();
    }
}

int main(void)
{
	Phonebook	PB;
	std::string str;
	str.clear();
	
	while (str.compare("EXIT") && std::cin.good())
	{
		std::cout << "Available commands are: ADD | SEARCH | EXIT." << std::endl;
		std::cin.clear();
		str.clear();
		std::getline(std::cin, str);
		if (!str.compare("ADD"))
			PB.AddContact();
		else if (!str.compare("SEARCH"))
            SearchMenu(PB);
	}
	return (0);
}
