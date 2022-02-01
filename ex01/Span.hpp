//
// Created by Регина on 31.01.2022.
//

#ifndef CPP_08_SPAN_HPP
#define CPP_08_SPAN_HPP


#include <iostream>
#include <vector>

class Span {
public:
    Span(int maxSize);
    Span(const Span &s);
    Span &operator=(Span &s);
    ~Span();
    void addNumber(int value);
    int shortestSpan();
    int longestSpan();
    void fillArr(std::vector<int>::iterator begin, std::vector<int>::iterator end);
private:
    std::vector<int> arr;
    unsigned long maxSize;
};


#endif //CPP_08_SPAN_HPP
