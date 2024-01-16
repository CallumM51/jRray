#include "jRray.h"

template<typename T> typename std::vector<T>::iterator jRray<T>::begin()
{
    return vec.begin();
}

template<typename T> typename std::vector<T>::iterator jRray<T>::rbegin()
{
    return vec.rbegin();
}

template<typename T> typename std::vector<T>::iterator jRray<T>::end()
{
    return vec.end();
}

template<typename T> typename std::vector<T>::iterator jRray<T>::rend()
{
    return vec.rend();
}

template<typename T> typename std::vector<T>::const_iterator jRray<T>::cbegin()
{
    return vec.cbegin();
}

template<typename T> typename std::vector<T>::const_iterator jRray<T>::crbegin()
{
    return vec.crbegin();
}

template<typename T> typename std::vector<T>::const_iterator jRray<T>::cend()
{
    return vec.cend();
}

template<typename T> typename std::vector<T>::const_iterator jRray<T>::crend()
{
    return vec.crend();
}