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
    while (this->first_name == "")
        prompt("First Name: ", &this->first_name);
    while (this->last_name == "")
        prompt("Last Name: ", &this->last_name);
    while (this->nickname == "")
        prompt("Nickname: ", &this->nickname);
    while (this->login == "")
        prompt("Login: ", &this->login);
    while (this->postal_address == "")
        prompt("Postal Address: ", &this->postal_address);
    while (this->email == "")
        prompt("Email: ", &this->email);
    while (this->phone_number == "")
        prompt("Phone Number: ", &this->phone_number);
    while (this->favorite_meal == "")
        prompt("Favorite Meal: ", &this->favorite_meal);
    while (this->underwear_color == "")
        prompt("Underwear Color: ", &this->underwear_color);
    while (this->darkest_secret == "")
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
    std::string id;
    prompt("Select Contact Id :", &id);
    int account_id = 777;
    try
    {
        account_id = std::stoi(id);
    }
    catch(std::exception& e){
        std::cout<< e.what() << std::endl;
    }

    if (account_id >= 0 && account_id < contacts->count)
    {
        std::cout << "First Name: " << contacts[account_id].first_name << std::endl;
        std::cout << "Last Name: " << contacts[account_id].last_name << std::endl;
        std::cout << "NickName: " << contacts[account_id].nickname << std::endl;
        std::cout << "Login: " << contacts[account_id].login << std::endl;
        std::cout << "Postal address: " << contacts[account_id].postal_address << std::endl;
        std::cout << "Email: " << contacts[account_id].email << std::endl;
        std::cout << "Phone Number: " << contacts[account_id].phone_number << std::endl;
        std::cout << "BirthDay: " << contacts[account_id].birthday << std::endl;
        std::cout << "Favorite Meal: " << contacts[account_id].favorite_meal << std::endl;
        std::cout << "UnderWear Color: " << contacts[account_id].underwear_color << std::endl;
        std::cout << "Darkest Secret: " << contacts[account_id].darkest_secret << std::endl;
    }
}
