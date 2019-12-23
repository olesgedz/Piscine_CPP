#include "Phonebook.hpp"

int Phonebook::addContact()
{
    int ret = 0;
    Contact new_contact;
    string read;
    cout << "Enter firstname: ";
    getline(cin,read);
    new_contact.setFirstName(read);
    list.push_back(new_contact);
    return (ret);
}
int Phonebook::listAllContacts()
{
    for(int i = 0; i < list.size(); i++)
    {
        cout << list[i].getFirstName() << endl;
    }

    return (0);
}