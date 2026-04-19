#include "MutantStack.hpp"

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
    std::cout << "===== TESTING MUTANTSTACK =====" << std::endl;
    
    // Create MutantStack and add elements
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    mstack.push(3);
    mstack.push(42);
    mstack.push(99);
    
    // Test stack operations
    std::cout << "Stack size: " << mstack.size() << std::endl;
    std::cout << "Top element: " << mstack.top() << std::endl;
    
    mstack.pop();
    std::cout << "After pop, top element: " << mstack.top() << std::endl;
    std::cout << "After pop, size: " << mstack.size() << std::endl;
    
    // Test forward iteration (bottom to top)
    std::cout << "\n=== Forward iteration (bottom to top) ===" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    
    Test reverse iteration (top to bottom)
    std::cout << "\n=== Reverse iteration (top to bottom) ===" << std::endl;
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }
    
    // Test const iterators
    std::cout << "\n=== Const iteration ===" << std::endl;
    const MutantStack<int>& const_ref = mstack;
    MutantStack<int>::const_iterator cit = const_ref.begin();
    MutantStack<int>::const_iterator cite = const_ref.end();
    while (cit != cite)
    {
        std::cout << *cit << std::endl;
        ++cit;
    }
    
    // Test copy constructor
    std::cout << "\n=== Testing copy constructor ===" << std::endl;
    MutantStack<int> copy_stack(mstack);
    std::cout << "Original size: " << mstack.size() << std::endl;
    std::cout << "Copy size: " << copy_stack.size() << std::endl;
    std::cout << "Original top: " << mstack.top() << std::endl;
    std::cout << "Copy top: " << copy_stack.top() << std::endl;
    
    // Test assignment operator
    std::cout << "\n=== Testing assignment operator ===" << std::endl;
    MutantStack<int> assigned_stack;
    assigned_stack = mstack;
    std::cout << "Assigned size: " << assigned_stack.size() << std::endl;
    std::cout << "Assigned top: " << assigned_stack.top() << std::endl;
    
    // Test that it works with different types
    std::cout << "\n=== Testing with double type ===" << std::endl;
    MutantStack<double> double_stack;
    double_stack.push(3.14);
    double_stack.push(2.71);
    double_stack.push(1.41);
    
    for (MutantStack<double>::iterator dit = double_stack.begin(); 
         dit != double_stack.end(); ++dit)
    {
        std::cout << *dit << std::endl;
    }
    
    std::cout << "\n===== ALL TESTS PASSED! =====" << std::endl;
    
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
//     mstack.push_back(5);      // ← list uses push_back, not push
//     mstack.push_back(17);     // ← list uses push_back, not push
//     std::cout << mstack.back() << std::endl;  // ← list uses back(), not top()
//     mstack.pop_back();        // ← list uses pop_back(), not pop()
//     std::cout << mstack.size() << std::endl;
//     mstack.push_back(3);
//     mstack.push_back(5);
//     mstack.push_back(737);
//     mstack.push_back(0);
    
//     // list HAS iterators natively
//     std::list<int>::iterator it = mstack.begin();
//     std::list<int>::iterator ite = mstack.end();
//     ++it;
//     --it;
//     while (it != ite)
//     {
//         std::cout << *it << std::endl;
//         ++it;
//     }
    
//     // This still won't work - stack has no constructor from list
//     // std::stack<int> s(mstack);
    
//     return 0;
// }