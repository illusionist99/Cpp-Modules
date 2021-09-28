# include <iostream>
# include <sstream>

void    displayAsChar( std::string value ) {

    int c;

    std::cout << "Char : ";
    if (value.length() == 1)
        c = value[0] - 48;
    else {
    
        try {
            c = stoi(value);
        }
        catch ( std::exception & e) {

            std::cout << "impossible\n";
            return;
        }
    }
    if (c >= 32 && c <= 126)
        std::cout << static_cast<char>(c);
    else
        std::cout << "Non displayable";

    std::cout << std::endl;
}

void    displayAsInt( std::string value ) {


    std::cout << "Int : ";
    try {
        std::cout << static_cast< int >(stoi(value)); 
    }
    catch ( std::exception & e) {
        std::cout << "impossible";
    }
    std::cout << std::endl;
}

void    displayAsFloat( std::string value ) {

    std::cout << "Float : ";
    if (value == "nan" || value == "-inff" || value == "+inff") {

        std::cout << value << "\n";
        return ;
    }
    try {
        std::cout << static_cast< float >(stof(value));
        if (stoi(value) == static_cast< float >(stof(value))) {
            std::cout << ".0f";
        }
        else
            std::cout << "f";
    }
    catch (std::exception & e) {
        std::cout << "impossible";
    }
    std::cout << std::endl;
}

void    displayAsDouble( std::string value ) {

    std::cout << "Double : ";
    if (value == "nan" || value == "-inf" || value == "+inf") {

        std::cout << value << "\n";
        return ;
    }
    try {
        std::cout << static_cast< double >(stod(value));
        if (stoi(value) == static_cast< double >(stod(value))) {
            std::cout << ".0";
        }
    }
    catch(std::exception & e) {
        std::cout << "impossible";
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