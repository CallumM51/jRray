#include "jRray.h"


template <typename T> int jRray<T>::size()
{
    return vec.size();
}

template <typename T> void jRray<T>::trimToSize()
{
    vec.shrink_to_fit();
}

// template <typename T> std::string jRray<T>::toString()
// {
//     std::string temp = "[";
//     for(int i = 0; i < vec.size(); i++) {
//         std::ostringstream ss;
//         ss << vec.at(i);
//         temp.append(ss.str());
//         if(i != (vec.siz()-1)) {
//             temp.append(",");
//         }
//     }
//     temp.append("]");
//     return temp;
// }

template <typename T> T jRray<T>::toArray()
{
    std::vector<T> arr(vec);
    return arr;
}

template <typename T>
template <typename A>
T jRray<T>::toArray(const A &a)
{
    std::vector<A> arr(vec);
    return arr;
}

template<typename T> std::vector<T> jRray<T>::subVector(const int &fromIndex,const int &toIndex)
{
    return std::vector<T>(vec.begin() + fromIndex, vec.begin() + toIndex);
}

template<typename T> jRray<T> jRray<T>::subJrray(const int &fromIndex, const int &toIndex)
{
    return jRray<T>(std::vector<T>(vec.begin() + fromIndex, vec.begin() + toIndex));
}

template<typename T> void quicksort(std::vector<T> &vec, const int &left, const int &right, const Comparator<T> &compare);
template<typename T> void quicksort(std::vector<T> &vec, const int &left, const int &right, const Comparator<T> &compare)
{
    if (left + 2 > right){
        return;
    }
    if (left + 7 > right){
    
        for(int i = left + 1; i < right; i++)
        {
            for(int j = i; j > left && compare(vec[j-1], vec[j]); j--)
            {
                T temp = vec[j-1];
                    vec[j-1] = vec[j];
                    vec[j] = temp;
            }
        }
     
        return;
    }
    const T pivot = vec[left];
    int i = left;
    for(int index = left+ 1; index < right; index++){
        if(compare(pivot, vec[index])){
            i++;
            T temp = vec[i];
            vec[i] = vec[index];
            vec[index] = temp;
        }
    }
    vec[left] = vec[i];
    vec[i] = pivot;
    quicksort(vec, left, i, compare);
    quicksort(vec, i + 1, right, compare);
}

template<typename T> void jRray<T>::sort(const Comparator<T> &c)
{

    quicksort(vec, 0, vec.size(), c);
}

template<typename T> void jRray<T>::setSize(const int &newSize)
{
    // if(newSize < 0) {
    //     throw ArrayIndexOutOfBoundsException;
    // }
    vec.resize(newSize);
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
    return hash;
}

template<typename T> void jRray<T>::forEach(const std::function<void(T)> func)
{
    for(int i = 0; i < vec.size(); i++)
    {
        func(vec[i]);
    }
}


template<typename T> void jRray<T>::ensureCapacity(const int &minCapacity)
{
    if (vec.size() < minCapacity) {
        vec.reserve(minCapacity - vec.size());
    }
}

template<typename T> std::set<T> jRray<T>::elements()
{
    std::set<T> set;
    for(int i = 0; i < vec.size(); i++)
    {
        set.insert(vec[i]);
    }
    return set;
}

template<typename T> void jRray<T>::copyInto(T anArray[])
{
    if (std::size(anArray) > vec.size()) {
        for(int i = 0; i < vec.size(); i++)
        {
            anArray[i] = vec[i];
        }
    }
}

template<typename T> int jRray<T>::capacity()
{
    return vec.capacity();
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