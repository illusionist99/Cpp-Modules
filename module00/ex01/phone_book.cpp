#include "phone.class.hpp"

int             main(void)
{
    std::string     s;
    contact         contacts[9];

    contacts->count = 0;
    while (true)
    {
        prompt("\rPHONE_BOOK $ ", &s);
        if (s.compare("ADD") == 0 || s.compare("EXIT") == 0 || s.compare("SEARCH") == 0)
        {
            if (s.compare("ADD") == 0)
            {
                if (contacts->count != 8)
                    contacts[contacts->count++].add_contact();
                else
                    std::cout << "Contacts Can't Be Added List is Full" << std::endl;
            }
            else if (s.compare("EXIT") == 0)
            {
                std::cout << "Cya Next Time" << std::endl;
                exit(1);
            }
            else if (s.compare("SEARCH") == 0)
                contacts->search_contacts(contacts);
        }
    }
    return (0);
}
