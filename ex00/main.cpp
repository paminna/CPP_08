//
// Created by Регина on 30.01.2022.
//

#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> arr;
    for (int i = 0; i < 5; i++)
    {
        arr.push_back(i);
        std::cout << "value " << i << std::endl;
    }
    std::cout << *easyfind(arr, 3) << std::endl;
}