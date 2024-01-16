#include "jRray.h"

template <typename T> void jRray<T>::insertElementAt(const T &t, const int &index)
{
    vec.insert(vec.begin() + index, t);
}

template <typename T> void jRray<T>::addElement(const T &obj)
{
    vec.push_back(obj);
}

template <typename T> void jRray<T>::addElement(const T &obj)
{
    vec.push_back(obj);
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