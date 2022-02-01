//
// Created by Регина on 31.01.2022.
//
#include "Span.hpp"

int main()
{
    {
        Span sp = Span(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "min: " << sp.shortestSpan() << std::endl;
        std::cout << "max: " << sp.longestSpan() << std::endl;
    }
    {
        Span sp2(10);
        std::vector<int> vec(10, 1);
        sp2.fillArr(vec.begin(), vec.end());
        std::cout<<"min: "<<sp2.shortestSpan() << std::endl;
        std::cout <<"max: "<<sp2.longestSpan() << std::endl;
    }
}