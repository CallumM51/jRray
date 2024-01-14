#include "jRray.h"
#include <unordered_set>

template <typename T> void jRray<T>::trimToSize()
{

}

template <typename T> std::string jRray<T>::toString()
{

}

template <typename T> T jRray<T>::toArray()
{

}
template <typename T> T jRray<T>::toArray(const T &a)
{

}

template<typename T> std::vector<T> jRray<T>::subVector(const int &fromIndex,const int &toIndex)
{
    return std::vector<T>(vec.begin() + fromIndex, vec.begin() + toIndex);
}

template<typename T> jRray<T> jRray<T>::subJrray(const int &fromIndex, const int &toIndex)
{
    jRray temp;
    for(int i = fromIndex; i < toIndex; i++)
    {
        temp.add(vec[i]);
    }   
    return temp;
}
template<typename T> void quicksort(std::vector<T> &vec, const int &left, const int &right)
{
    int i = left, j = right;
    T tmp;
    T pivot = vec[left];
    while(i <= j)
    {
        while(vec[i] < pivot)
            i++;
        while(vec[j] > pivot)
            j--;
        if(i <= j)
        {
            tmp = vec[i];
            vec[i] = vec[j];
            vec[j] = tmp;
            i++;
            j--;
        }
    }
    if(left < j)
        quicksort(vec, left, j);
    if(i < right)
        quicksort(vec, i, right);
    

}

//template<typename T> void jRray<T>::sort(Comparator<? super E> c)
//{
//
//}

template<typename T> void jRray<T>::setSize(const int &newSize)
{

}

template<typename T> bool jRray<T>::retainAll(const T &c)
{

}
template<typename T> bool jRray<T>::retainAll(const std::vector<T> &c)
{

}
template<typename T> bool jRray<T>::retainAll(const jRray &c)
{

}

// template<typename T> void jRray<T>::replaceAll(UnaryOperator<E> operator)
// {

// }

template<typename T> void jRray<T>::removeRange(const int &fromIndex, const int &toIndex)
{
    const int size = vec.size();
    const int range = toIndex - fromIndex;
    for(int i = fromIndex; i < size; i++)
    {
        vec[i] = vec[i + range];
    }
}

// template<typename T> bool jRray<T>::removeIf(Predicate<? super E> filter)
// {

// }

template<typename T> void jRray<T>::removeAllElements()
{

}

template<typename T> bool jRray<T>::removeAll(const T &c)
{

}
template<typename T> bool jRray<T>::removeAll(const std::vector<T> &c)
{

}
template<typename T> bool jRray<T>::removeAll(const jRray &c)
{

}

template<typename T> int jRray<T>::hashCode()
{
    int64_t hash = vec.size();
    for(int i = 0; i < vec.size(); i++)
    {
        hash ^= vec[i] >> 7;
        hash |= vec[i] << 7;
        hash += vec[i];
    }
    return hash
}

// template<typename T> void jRray<T>::forEach(Consumer<? super T> action)
// {

// }

template<typename T> void jRray<T>::ensureCapacity(const int &minCapacity)
{

}

// template<typename T> enum<E> jRray::elements()
// {

// }

template<typename T> void jRray<T>::copyInto(T anArray[])
{

}

template<typename T> bool jRray<T>::containsAll(const T &c)
{
    std::unordered_set<T> set;
    for(int i = 0; i < vec.size(); i++)
    {
        set.insert(vec[i]);
    }
}
template<typename T> bool jRray<T>::containsAll(const std::vector<T> &c)
{
    std::unordered_set<T> set;
    for(int i = 0; i < vec.size(); i++)
    {
        set.insert(vec[i]);
    }
    for(int i = 0; i < c.size(); i++)
    {
        if(set.find(c[i]) == set.end())
        {
            return false;
        }
    }
    return true;
}
template<typename T> bool jRray<T>::containsAll(const jRray &c)
{
    std::unordered_set<T> set;
    for(int i = 0; i < vec.size(); i++)
    {
        set.insert(vec[i]);
    }
    for(int i = 0; i < c.size(); i++)
    {
        if(set.find(c.at(i)) == set.end())
        {
            return false;
        }
    }
    return true;
}

template<typename T> int jRray<T>::capacity()
{
    return vec.capacity();
}

template<typename T> bool jRray<T>::addAll(const int &index, const T &c)
{
    for(int i = 0; i < c.size(); i++)
    {
        vec.insert(vec.begin() + index, c[i])
    }
    return true;
}
template<typename T> bool jRray<T>::addAll(const int &index, const std::vector<T> &c)
{
    for(int i = 0; i < c.size(); i++)
    {
        vec.insert(vec.begin() + index, c[i])
    }
    return true;
}
template<typename T> bool jRray<T>::addAll(const int &index, const jRray &c)
{
    for(int i = 0; i < c.size(); i++)
    {
        vec.insert(vec.begin() + index, c.at(i))
    }
    return true;
}
template<typename T> bool jRray<T>::addAll(const T &c)
{
    for(int i = 0; i < c.size(); i++)
        {
            vec.push_back(c[i]);
        }
    return true;
}
template<typename T> bool jRray<T>::addAll(const std::vector<T> &c)
{
    for(int i = 0; i < c.size(); i++)
    {
        vec.push_back(c[i]);
    }
    return true;
}
template<typename T> bool jRray<T>::addAll(const jRray &c)
{
    for(int i = 0; i < c.size(); i++)
    {
        vec.push_back(c.at(i));
    }
    return true;
}

// template<typename T> jRray& jRray<T>::operator=( const jRray& other )
// {

// }

template<typename T> jRray<T>::~jRray()
{

}

template<typename T> jRray<T>::jRray()
{

}