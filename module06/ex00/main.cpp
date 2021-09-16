# include <iostream>
# include <sstream>



void    displayAsChar( char value ) {

    if (value >= 32 && value < 127)
        std::cout << "Char : " << value;
    else
        std::cout << "Char : Non displayable" << std::endl;
}

void    displayAsInt( std::string value ) {

    std::cout << "Char : " << stoi(value); 
}

void    displayAsFloat( std::string value ) {

    std::cout << "Char : " << stof(value); 
}

void    displayAsDouble( std::string value ) {

    std::cout << "Char : " << stod(value); 
}


void    convert(std::string value) {

    displayAsChar(dynamic_cast<char >(value));
    displayAsInt(value);
    displayAsFloat(value);
    displayAsDouble(value);

}


int     main( int ac, char **av) {

    if (ac == 2)
        convert(av[1]);

    return (0);
}