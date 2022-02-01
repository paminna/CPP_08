//
// Created by Регина on 31.01.2022.
//

#ifndef CPP_08_EASYFIND_HPP
#define CPP_08_EASYFIND_HPP

#include <iostream>

template <typename T>
typename T::iterator easyfind(T &array, int index)
{
    typename T::iterator iter;

    if((iter = std::find(array.begin(), array.end(), index)) == array.end())
        throw std::exception();
    return iter;
}

#endif //CPP_08_EASYFIND_HPP
