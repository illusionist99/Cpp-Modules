# include "Array.hpp"

#define MAX_VAL 750


int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
     Array<int> numb(10);
    
    numb = numbers;
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % MAX_VAL;
        numbers[i] = value;
        mirror[i] = value;
    }

    Array<int> tmp = numbers;
    Array<int> test(tmp);


    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    for (int i = 0; i < 20; i++)
    {
        std::cout << numbers[i] << std::endl;
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;


    Array< std::string > names(5);

    names[0] = "name00";
    names[1] = "name10";
    names[2] = "name20";
    names[3] = "name30";
    names[4] = "name40";

    for (int i = 0; i < 5; i++)
        std::cout << names[i] << std::endl;
    
    try {
        std::cout << names[1000] << std::endl;
    }
    catch (std::exception & e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}