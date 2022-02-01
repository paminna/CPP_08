//
// Created by Регина on 31.01.2022.
//

#include "Span.hpp"
#include <vector>

Span::Span(int maxSize) : maxSize(maxSize)
{
    if (maxSize < 1)
        throw std::exception();
}

Span::Span(const Span &s)
{
    this->maxSize = s.maxSize;
    this->arr = s.arr;
}

Span &Span::operator=(Span &s)
{
    this->maxSize = s.maxSize;
    this->arr = s.arr;
    return *this;
}

Span::~Span() {}

void Span::addNumber(int value)
{
    if (arr.size() == maxSize)
        throw std::exception();
    arr.push_back(value);
}

int Span::shortestSpan()
{
    if (arr.empty() || arr.size() == 1)
        throw std::exception();
    std::sort(arr.begin(), arr.end());
    int min = arr[1] - arr[0];
    for (size_t i = 1; i < arr.size() - 1; i++)
    {
        if (min > arr[i + 1] - arr[i])
            min = arr[i + 1] - arr[i];
    }
    return min;
}

int Span::longestSpan()
{
    if (arr.max_size() < 2)
        throw std::exception();
    std::sort(arr.begin(), arr.end());
    int min = arr[0];
    int max = arr[maxSize - 1];
    return  (max - min);
}

void Span::fillArr(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator i = begin; i != end; i++)
        addNumber(*i);
}