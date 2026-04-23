#include "Span.hpp"

int main()
{
    int n =  10000;
    Span ff(n);
    try
    {
        int i = 0;
        while(i < n)
        {
            ff.addNumber(i*2);
            i++;
        }

        std::cout<<ff.longestSpan()<<std::endl;
        std::cout<<ff.shortestSpan()<<std::endl;;
    }
    catch (const std::out_of_range& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
}

// int main()
// {
// Span sp = Span(5);
// sp.addNumber(6);
// sp.addNumber(3);
// sp.addNumber(17);
// sp.addNumber(9);
// sp.addNumber(11);
// std::cout << sp.shortestSpan() << std::endl;
// std::cout << sp.longestSpan() << std::endl;
// return 0;
// }