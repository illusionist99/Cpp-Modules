# include <iostream>
# include <sstream>



void    displayAsChar( std::string value ) {

    if (value >= 32 && value < 127)
        std::cout << "Char : " << value;
    else
        std::cout << "Char : Non displayable" << std::endl;
}

void    displayAsInt( std::string value ) {


    std::cout << "Int : ";
    try {
        std::cout << static_cast< int >(stoi(value)); 
    }
    catch ( std::exception & e) {
        std::cout << "imossible";
    }
    std::cout << std::endl;
}

void    displayAsFloat( std::string value ) {

    std::cout << "Float : ";
    try {
        std::cout << static_cast< float >(stof(value));
    }
    catch (std::exception & e) {
        std::cout << "imossible";
    }
    std::cout << std::endl;
}

void    displayAsDouble( std::string value ) {

    std::cout << "Double : ";
    try {
        std::cout << static_cast< double >(stod(value)); 
    }
    catch(std::exception & e) {
        std::cout << "imossible";
    }
    std::cout << std::endl;
}


void    convert(std::string value) {

    displayAsChar(value);
    displayAsInt(value);
    displayAsFloat(value);
    displayAsDouble(value);

}


int     main( int ac, char **av) {

    if (ac == 2)
        convert(av[1]);

    return (0);
}