#include "MutantStack.tpp"

int main()
{
    MutantStack<int> stack;
    stack.push(5);
    stack.push(15);
    stack.push(25);
    
    // Non-const iterator
    MutantStack<int>::iterator non_const_it = stack.begin();
    *non_const_it = 100;  // change first element
    
    // non-const iterator with while loop
    std::cout << "Using non-const iterator: ";
    MutantStack<int>::iterator it = stack.begin();
    while (it != stack.end())
    {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << std::endl;
    
    // Const iterator 
    const MutantStack<int>& const_ref = stack;
    std::cout << "Using const iterator: ";
    MutantStack<int>::const_iterator const_it = const_ref.begin();
    while (const_it != const_ref.end())
    {
        std::cout << *const_it << " ";
        ++const_it;
    }
    std::cout << std::endl;
    
    return 0;
}

// int main()
// {
//     MutantStack<int> mstack;
//     mstack.push(5);
//     mstack.push(17);
//     std::cout << mstack.top() << std::endl;
//     mstack.pop();
//     std::cout << mstack.size() << std::endl;
//     mstack.push(3);
//     mstack.push(5);
//     mstack.push(737);
//     //[...]
//     mstack.push(0);
//     MutantStack<int>::iterator it = mstack.begin();
//     MutantStack<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//     std::cout << *it << std::endl;
//     ++it;
//     }
//     std::stack<int> s(mstack);
//     return 0;
// }
// #include <list>

// int main()
// {
//     std::list<int> mstack;
//     mstack.push_back(5);     
//     mstack.push_back(17);    
//     std::cout << mstack.back() << std::endl;  
//     mstack.pop_back();
//     std::cout << mstack.size() << std::endl;
//     mstack.push_back(3);
//     mstack.push_back(5);
//     mstack.push_back(737);
//     mstack.push_back(0);
    

//     std::list<int>::iterator it = mstack.begin();
//     std::list<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
    
//     return 0;
// }