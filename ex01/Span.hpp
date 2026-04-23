#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <algorithm>
#include <vector>

class Span 
{
    private:
        unsigned int N;
        std::vector<int> stac;
    public:
        Span();
        Span(unsigned int n) ;
        ~Span();
        Span(const Span &other) ;
        Span &operator=(const Span &other);
        void addNumber(int a);
        void addNumber(std::vector<int> &old);
        int shortestSpan();
        int longestSpan();
};

#endif