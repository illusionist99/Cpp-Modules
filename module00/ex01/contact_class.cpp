#include "phone.class.hpp"

void    prompt(std::string msg, std::string *s)
{
    std::cin.clear();
    std::cin.sync();
    std::cout << msg;
    std::getline(std::cin, *s);
    if (std::cin.eof())
    {
        std::cout << std::endl << "Couldn't read input" << std::endl;
        exit(1);
    }
}

void    contact::add_contact( void )
{
    prompt("First Name: ", &this->first_name);
    prompt("Last Name: ", &this->last_name);
    prompt("Nickname: ", &this->nickname);
    prompt("Login: ", &this->login);
    prompt("Postal Address: ", &this->postal_address);
    prompt("Email: ", &this->email);
    prompt("Phone Number: ", &this->phone_number);
    prompt("Favorite Meal: ", &this->favorite_meal);
    prompt("Underwear Color: ", &this->underwear_color);
    prompt("Darkest Secret: ", &this->darkest_secret);
}

void        print_truncated(std::string s, int endl)
{
    int len = s.length();
    if (len > 9)
    {
        s.resize(8);
        std::cout << std::right << std::setw(8) << s;
    }
    else
        std::cout << std::right << std::setw(9) << s;
    if (len > 9)
        std::cout << '.';
    std::cout << '|';
    if (endl)
        std::cout << std::endl;
}

void    contact::search_contacts(contact *contacts)
{
    int i;

    i = 0;
    print_truncated("index", 0);
    print_truncated("prenom", 0);
    print_truncated("nom de famille", 0);
    print_truncated("pseudo", 1);
    while (i < contacts->count)
    {
        std::cout << std::setw(9) << i << '|';
        print_truncated(contacts[i].last_name, 0);
        print_truncated(contacts[i].first_name, 0);
        print_truncated(contacts[i].login, 1);
        i++;
    }
}
