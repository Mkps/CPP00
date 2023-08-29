
#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream> 
# include "Contact.class.hpp"

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
