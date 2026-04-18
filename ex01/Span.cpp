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
    std::vector<int> tmp = stac;
    std::sort(tmp.begin(), tmp.end());
    int shortest = tmp[1] - tmp[0];
    int tmp_short = 0;
    for (size_t i = 2; i < tmp.size(); i++)
    {
        tmp_short = tmp[i] - tmp[i - 1];
        if (tmp_short < shortest)
            shortest = tmp_short;
    }
    return (shortest);

}

int Span::longestSpan()
{
    if (stac.size() < 2)
        throw std::out_of_range("The vector is too short");
    std::vector<int> tmp = stac;
    std::sort(tmp.begin(), tmp.end());
    return (tmp.back() - tmp.front());
}