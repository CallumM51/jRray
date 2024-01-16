#include "jRray.h"

template<typename T> T& jRray<T>::operator[](const int& index)
{
    return vec[index];
}

template<typename T> jRray<T>& jRray<T>::operator=( const jRray<T>& other )
{
    vec = other.vec;
}