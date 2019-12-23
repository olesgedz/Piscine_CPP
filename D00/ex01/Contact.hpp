#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>
using namespace std;
#define FIELD_COUNT 11
class Contact
{
    // private:
    //     static std::string _fieldNames[FIELD_COUNT];
	// 	std::string _fields[FIELD_COUNT];
    //     // string first_name;
    //     // string last_name;
    //     // string nickname;
    //     // string login;
    //     // string postal_address;
    //     // string email_address;
    //     // string phone_number;
    //     // string birthday;
    //     // string favorite_meal;
    //     // string underwear_color;
    //     // string dark_secret;
    // public:
    // Contact()
    // {

    // }
    // ~Contact()
    // {

    // }
    // // void setFirstName(string n){first_name = n;};
    // // void setLastName(string ln){last_name = ln;};
    // // void setNickname(string nk){nickname = nk;};
    // // void setLogin(string l){login = l;};
    // // void setPostalAddress(string adr){postal_address = adr;};
    // // void setEmailAddress(string eml){email_address = eml;};
    // // void setPhoneNumber(string nu){phone_number = nu;};
    // // void setBirthday(string birthd){birthday = birthd;};
    // // void setFavoriteMeal(string meal){favorite_meal = meal;};
    // // void setUnderwearColor(string col){underwear_color = col;};
    // // void setDarkSecret(string secret){dark_secret = secret;};

    // // string getFirstName(){return(first_name);};
    // // string getLastName(){return last_name;};
    // // string getNickname(){return nickname;};
    // // string getLogin(){return login;};
    // // string getPostalAddress(){return postal_address;};
    // // string getEmailAddress(){return email_address;};
    // // string getPhoneNumber(){return phone_number;};
    // // string getBirthday(){return birthday;};
    // // string getFavoriteMeal(){return favorite_meal;};
    // // string getUnderwearColor(){return underwear_color;};
    // // string getDarkSecret(){return dark_secret;};

    public:
		Contact(void);
		~Contact(void);

		void		Prompt(void);
		void		Display(void) const;
		std::string	GetField(int field) const;
		void		SetField(int field, std::string value);

		static int	FindField(std::string field);

	private:
		static std::string _fieldNames[FIELD_COUNT];
		std::string _fields[FIELD_COUNT];
};
#endif