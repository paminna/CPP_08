//
// Created by Регина on 31.01.2022.
//

#ifndef CPP_08_MUTANSTACK_HPP
#define CPP_08_MUTANSTACK_HPP

#include <stack>
#include <iostream>
#include <iterator>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack() : std::stack<T>() {};
    MutantStack(MutantStack const &copy) : std::stack<T>(copy){};
    ~MutantStack(){};
    MutantStack &operator=(const MutantStack & mutantStack){ return (this->operator=(mutantStack));};

    typedef typename std::stack<T>::container_type::iterator it;
    typedef typename std::stack<T>::container_type::reverse_iterator iter;

    it begin(){return (this->c.begin());};

    it end(){return (this->c.end());};

    iter reverse_begin(){return (this->c.reverse_begin());};

    iter reverse_end(){return this->c.reverse_end();};

};

#endif //CPP_08_MUTANSTACK_HPP
