#include "jRray.h"

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
