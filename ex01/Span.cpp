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
        throw std::overflow_error("Index out of bounds");
}

int Span::shortestSpan()
{
    if (stac.size() < 2)
        throw std::overflow_error("The vector is too short");
    
    std::sort(stac.begin(), stac.end());
    int shortest = stac[1] - stac[0];
    for (size_t i = 2; i < stac.size(); i++)
        shortest = std::min(shortest, stac[i] - stac[i-1]);
    return shortest;
}

int Span::longestSpan()
{
    if (stac.size() < 2)
        throw std::overflow_error("The vector is too short");
    return (*std::max_element(stac.begin(), stac.end()) - 
            *std::min_element(stac.begin(), stac.end()));
}

void Span::addNumber(std::vector<int> &old)
{
    if (stac.size() + old.size() > N)
            throw std::ooverflow_error("no more capacity!");
        stac.insert(stac.end(), old.begin(), old.end());
}