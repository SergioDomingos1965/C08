#ifndef EASY_HPP
#define EASY_HPP

#include <iostream>
#include <vector>
#include <stdexcept>

template<typename T>
typename T::iterator easyfind(T &container, int v)
{
    typename T::iterator i = container.begin();
    while( i != container.end())
    {
            if(*i == v)
                return i;
        i++;
    }

    throw std::runtime_error("Value not found");

}
#endif

