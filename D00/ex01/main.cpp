#include <iostream>
using namespace std;
#include "Phonebook.hpp"

int main()
{
    Phonebook book = Phonebook();
    book.addContact();
    book.listAllContacts();
    return (0);
}