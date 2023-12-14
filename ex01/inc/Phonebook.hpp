
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
	Contact SearchContact(int index);
	void	DisplayAllContacts(void);

private:
	Contact listing[8];
	int		current_index;
	
};

#endif
