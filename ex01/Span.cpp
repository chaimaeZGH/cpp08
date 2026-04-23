#include "Span.hpp"


Span::Span():N(0){}
Span::Span(unsigned int n) : N(n)
{}
Span::~Span(){}

Span::Span(const Span &other) : N(other.N), stac(other.stac) {}

Span & Span::operator=(const Span &other)
{
    if (this == &other)
        return *this;
    N = other.N;
    stac = other.stac;
    return *this;   
}

void Span::addNumber(int a)
{
    if(stac.size() < N)
        stac.push_back(a);
    else
        throw std::out_of_range("Index out of bounds");
}

int Span::shortestSpan()
{
    if (stac.size() < 2)
        throw std::out_of_range("The vector is too short");
    
    int shortest = abs(stac[1] - stac[0]);  // Absolute difference
    
    for (size_t i = 0; i < stac.size(); i++) 
    {
        for (size_t j = i + 1; j < stac.size(); j++)
        {
            int diff = abs(stac[i] - stac[j]);
            if (diff < shortest)
                shortest = diff;
        }
    }
    return shortest;
}

int Span::longestSpan()
{
    if (stac.size() < 2)
        throw std::out_of_range("The vector is too short");
    return (*std::max_element(stac.begin(), stac.end()) - 
            *std::min_element(stac.begin(), stac.end()));
}