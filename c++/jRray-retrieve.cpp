#include "jRray.h"


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