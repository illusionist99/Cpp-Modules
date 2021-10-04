# include "span.hpp"
# include <vector>

int main()
{
    Span sp = Span(100000001);
    std::vector<int> g;

    for (int i = 0; i < 10000 ;i++)
        g.push_back(i);
    // for (int i = 0; i < 10000 ;i++)
    //     std::cout << g[i];
    try {
        sp.addNumber(g);
        sp.addNumber(-1);
        sp.addNumber(9999999);
        // sp.addNumber(9);
        // sp.addNumber(11);
    }
    catch ( std::exception & e) {
        std::cout << e.what() << std::endl;
    }
  
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    return (0);
}
