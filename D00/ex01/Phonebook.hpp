#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <vector>
#include <iostream>
#include "Contact.hpp"
using namespace std;
class Phonebook
{
    private:
        std::vector<Contact> list;
    public:
        Phonebook()
        {

        }
        ~Phonebook()
        {
            
        }
        int addContact();
        int listAllContacts();
    
};

#endif