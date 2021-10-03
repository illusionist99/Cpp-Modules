# include "span.hpp"
# include <vector>

int main()
{
Span sp = Span(10000);
std::vector<int> g;
for (int i = 0; i < 10000 ;i++)
    g.push_back(i);
// for (int i = 0; i < 10000 ;i++)
//     std::cout << g[i];
sp.addNumber(g);
// sp.addNumber(5);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
}