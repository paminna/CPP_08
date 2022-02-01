//
// Created by Регина on 31.01.2022.
//
#include "MutanStack.hpp"
#include <iostream>
#include <list>

int main()
{
//    MutantStack<int> mstack;
//    mstack.push(5);
//    mstack.push(17);
//    std::cout << mstack.top() << std::endl; // выводим верхний элемент
//    mstack.pop(); // удаляем верхний элемент
//    std::cout << mstack.size() << std::endl; //выводим размер стека
//    mstack.push(3);
//    mstack.push(5);
//    mstack.push(737); //[...] mstack.push(0);
//    MutantStack<int>::it it = mstack.begin();
//    MutantStack<int>::it ite = mstack.end();
//    ++it;
//    --it;
//    while (it != ite)
//    {
//        std::cout << *it << std::endl;
//        ++it;
//    }
//    std::stack<int> s(mstack);
    std::list<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl; // выводим верхний элемент
    mstack.pop(); // удаляем верхний элемент
    std::cout << mstack.size() << std::endl; //выводим размер стека
    mstack.push(3);
    mstack.push(5);
    mstack.push(737); //[...] mstack.push(0);
    MutantStack<int>::it it = mstack.begin();
    MutantStack<int>::it ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    return 0;
}