#include "jRray.h"

template <typename T> int jRray<T>::size()
{
    return vec.size();
}

template <typename T> void jRray<T>::setElementAt(const T &obj,const int &index)
{
    vec[index] = obj;
}

template <typename T> T jRray<T>::set(const int &index,const T &element)
{
    T temp = vec[index];
    vec[index] = element;
    return temp;
}

template <typename T> void jRray<T>::removeElementAt(const int &index)
{
    vec.erase(vec.begin() + index);
}


template <typename T> bool jRray<T>::removeElement(const T &t)
{   
    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i] == t)
        {
            vec.erase(vec.begin() + i);
            return true;
        }
    }
    return false;
}

template <typename T> T jRray<T>::remove(const int &index)
{
    T temp = vec[index];
    vec.erase(vec.begin() + index);
    return temp;
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
template <typename T> bool jRray<T>::isEmpty()
{
    return vec.empty();
}

template <typename T> void jRray<T>::insertElementAt(const T &t, const int &index)
{
    vec.insert(vec.begin() + index, t);
}
template <typename T> int jRray<T>::indexOf(const T &t, const int &index)
{
    for(int i = index; i < vec.size(); i++)
    {
        if(vec[i] == t)
        {
            return i;
        }
    }
    return -1;
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

template <typename T> T& jRray<T>::at(const int &index)
{
    return vec[index];
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
template <typename T> jRray<T> jRray<T>::clone()
{
    return jRray<T>(this);
}
template <typename T> void jRray<T>::clear()
{
    vec.clear();
}
template <typename T> void jRray<T>::add(const int &index, const T &t)
{
    vec.insert(vec.begin() + index, t);
}
template <typename T> bool jRray<T>::add(const T &t)
{
    vec.push_back(t);
    return true;
}
template <typename T> void jRray<T>::addElement(const T &obj)
{
    vec.push_back(obj);
}