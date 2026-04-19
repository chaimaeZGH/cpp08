#include "easyfind.hpp"

int main()
{
    std::list<int> liss;
    liss.push_back(3);
    liss.push_back(7);
    liss.push_back(10);
    int a;
    try
    {
        a = *easyfind(liss,10);
        std::cout << a <<std::endl;
    }
    catch (std::out_of_range& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
}