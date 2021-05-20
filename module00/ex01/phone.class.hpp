#ifndef PHONE_CLASS_HPP
# define PHONE_CLASS_HPP

#include <iostream>
#include <iomanip>

class contact {

  private:
    std::string   first_name;
    std::string   last_name;
    std::string   nickname;
    std::string   login;
    std::string   postal_address;
    std::string   email;
    std::string   phone_number;
    std::string   birthday;
    std::string   favorite_meal;
    std::string   underwear_color;
    std::string   darkest_secret;
  
  public:
    int     count;
    void    add_contact( void );
    void    search_contacts(contact *contacts);
};

void        prompt(std::string msg, std::string *s);

#endif
