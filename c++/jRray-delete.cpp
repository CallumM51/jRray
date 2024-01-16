#include "jRray.h"

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

template <typename T> T jRray<T>::removeAt(const int &index)
{
    T temp = vec[index];
    vec.erase(vec.begin() + index);
    return temp;
}
template <typename T> bool jRray<T>::remove(const T &t){
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