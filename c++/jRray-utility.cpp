#include "jRray.h"


template <typename T> int jRray<T>::size()
{
    return vec.size();
}

template <typename T> bool jRray<T>::isEmpty()
{
    return vec.empty();
}

template <typename T> jRray<T> jRray<T>::clone()
{
    return jRray<T>(this);
}
template <typename T> void jRray<T>::clear()
{
    vec.clear();
}

template <typename T> bool jRray<T>::contains(const T &t)
{
    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i] == t)
        {
            return true;
        }
    }
    return false;
}
template <typename T> bool jRray<T>::equals(jRray j)
{
    if(vec.size() != j.size())
    {
        return false;
    }
    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i] != j.at(i))
        {
            return false;
        }
    }
    return true;
}

template <typename T> bool jRray<T>::equals(std::vector<T> v)
{
    if(vec.size() != v.size())
    {
        return false;
    }
    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i] != v[i])
        {
            return false;
        }
    }
    return true;
}