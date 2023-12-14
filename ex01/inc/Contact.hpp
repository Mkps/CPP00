#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream> 
# include <string>
# include <iomanip>
# include <limits>

class Contact {
public:
	Contact();
	void		SetFirstName(void);
	void		SetLastName(void);
	void		SetNickName(void);
	void		SetPhoneNumber(void);
	void		SetDarkestSecret(void);
	void		SetIndex(int index);
	void		GetIndex(void);
	std::string	GetFirstName(void);
	std::string	GetLastName(void);
	std::string	GetNickName(void);
	std::string	GetPhoneNumber(void);
	std::string	GetDarkestSecret(void);
	void		DisplayContact(void);
	void		DisplaySummary(void);
	~Contact();

private:
	int			current_index;
	std::string	first_name;
	std::string	last_name;	
	std::string	nickname;	
	std::string	phone_number;	
	std::string	darkest_secret;	
};

#endif
