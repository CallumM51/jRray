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
template<typename T> jRray<T> jRray<T>::subJrray(int fromIndex, int toIndex)
{
    jRray temp;
    for(int i = fromIndex; i < toIndex; i++)
    {
        temp.add(vec[i]);
    }   
    return temp;
}


template <typename T> void quicksort(std::vector<T> &vec, const int &left, const int &right, const Comparator<T> &compare)
{
    if (left + 7 < right){
        for(int i = left + 1; i < right; i++)
        {
            for(int j = i; j > left && compare(vec[j-1], vec[j]); j-)
            {
                    T temp = vec[i];
                    vec[i] = vec[j];
                    vec[j] = temp;
            }
        }
        return;
    }
    T pivot = vec[left];
    int less = left;
    for(int i = left + 1; i < right; i++)
    {
        if(compare(pivot, vec[i]))
        {
            less++;
            T temp = vec[i];
            vec[i] = vec[less];
            vec[less] = temp;
        }
    }
    T temp = vec[left];
    vec[left] = vec[less];
    vec[less] = temp;
    quicksort(vec, left, less, compare);
    quicksort(vec, less + 1, right, compare);
}
template<typename T> void jRray<T>::sort(const Comparator<T> &c)
{
    quicksort(vec, 0, vec.size(), c);
}

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
template<typename T> void jRray<T>::replaceAll(UnaryOperator<E> operator)
{

}
template<typename T> void jRray<T>::removeRange(int fromIndex, int toIndex)
{
    const int size = vec.size();
    const int range = toIndex - fromIndex;
    for(int i = fromIndex; i < size; i++)
    {
        vec[i] = vec[i + range];
    }
}
template<typename T> bool jRray<T>::removeIf(Predicate<? super E> filter)
{

}

template<typename T> void jRray<T>::removeAllElements()
{

}
template<typename T> bool jRray<T>::removeAll(T c[])
{

}
template<typename T> bool jRray<T>removeAll(std::vector<T> c)
{

}
template<typename T> bool jRray<T>::removeAll(jRray c)
{

}




template<typename T> int64_t jRray<T>::hashCode()
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

template<typename T> void jRray<T>::forEach(Consumer<? super T> action)
{

}

template<typename T> void jRray<T>::ensureCapacity(const int &minCapacity)
{

}
enum<E> jRray::elements()
{

}

template<typename T> void jRray<T>::copyInto(T anArray[])
{

}
template<typename T> bool jRray<T>::containsAll(T c[])
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
template<typename T> bool jRray<T>::containsAll(jRray c)
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

}

template<typename T> bool jRray<T>::addAll(const int &index, const T []c)
{

}
template<typename T> bool jRray<T>::addAll(const int &index, const std::vector<T> &c)
{

}
template<typename T> bool jRray<T>::addAll(const int &index, const jRray &c)
{

}
template<typename T> bool jRray<T>::addAll(const T &c[])
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
template<typename T> bool jRray<T>::addAll(jRray c)
{
    for(int i = 0; i < c.size(); i++)
    {
        vec.push_back(c.at(i));
    }
    return true;
}

jRray& jRray::operator=( const jRray& other )
{

}
template<typename T> jRray<T>::~jRray()
{

}
template<typename T> jRray<T>::jRray()
{

}