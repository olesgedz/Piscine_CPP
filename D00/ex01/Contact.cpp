#include "Contact.hpp"


Contact::Contact(void) {}
Contact::~Contact(void) {}

std::string Contact::_fieldNames[FIELD_COUNT] = {
	"First name",
	"Last name",
	"Nickname",
	"Login",
	"Postal address",
	"E-mail address",
	"Phone number",
	"Birthday date",
	"Favorite meal",
	"Underwear color",
	"Darkest secret"
};

int			Contact::FindField(std::string field)
{
	for (int i = 0; i < FIELD_COUNT; i++)
	{
		if (field.compare(Contact::_fieldNames[i]) == 0)
			return (i);
	}

	return (-1);
}

void		Contact::SetField(int i, std::string value)
{
	this->_fields[i] = value;
}

std::string	Contact::GetField(int i) const
{
	return this->_fields[i];
}

void		Contact::Prompt(void)
{
	std::cout << "Creating new contact." << std::endl;

	for (int i = 0; i < FIELD_COUNT; i++)
	{
		std::string value = "";

		while (value.compare("") == 0) {
			std::cout << (i + 1) << "/" << FIELD_COUNT << " - "
				<< Contact::_fieldNames[i] << ": ";
			std::getline(std::cin, value);

			if (!std::cin.good())
				exit(0);

			if (value.compare("") == 0) {
				std::cout << "Error: field cannot be empty!" << std::endl;
			}
		}

		this->SetField(i, value);
	}
}

void		Contact::Display(void) const
{
	for (int i = 0; i < FIELD_COUNT; i++)
	{
		std::cout << "- " << Contact::_fieldNames[i] << ": "
			<< this->_fields[i] << std::endl;
	}
}