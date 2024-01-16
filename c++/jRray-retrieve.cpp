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
template <typename T> int jRray<T>::lastIndexOf(const T &t, const int &index)
{
    for(auto i = index; i >= 0; i--)
    {
        if(vec[i] == t)
        {
            return i;
        }
    }
    return -1;
}

template <typename T> int jRray<T>::lastIndexOf(const T &t)
{
    for(auto i = vec.size() - 1; i >= 0; i--)
    {
        if(vec[i] == t)
        {
            return i;
        }
    }
    return -1;
}

template <typename T> T jRray<T>::lastElement()
{
    return vec.back();
}


template <typename T> T jRray<T>::get(const int &index){
    return vec[index];
}

template <typename T> T jRray<T>::at(const int &index)
{
    return vec[index];
}


template <typename T> int jRray<T>::indexOf(T t)
{
    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i] == t)
        {
            return i;
        }
    }
    return -1;
}