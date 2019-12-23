#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <vector>
#include <iostream>
#include "Contact.hpp"
using namespace std;
class Database
{
	public:
		Database(void);
		~Database(void);

		int		Count(void) const;
		void	AddContact(Contact c);
		Contact	GetContact(int i) const;
		void	List(void) const;

	private:
		int			_count;
		vector<Contact>		_contacts;
}; // class Database

#endif