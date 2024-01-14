#include "jRray.h"
#include <unordered_set>
void jRray<typename T>::trimToSize()
{

}
std::string jRray::toString()
{

}
T[] jRray::toArray(T a[])
{

}
T[] jRray::toArray()
{

}
template<typename T> std::vector<T> jRray<T>::subVector(const int &fromIndex,const int &toIndex)
{
    return std::vector<T>(vec.begin() + fromIndex, vec.begin() + toIndex);
}
template<typename T> jRray<T>::subJrray(int fromIndex, int toIndex)
{
    jRray temp;
    for(int i = fromIndex; i < toIndex; i++)
    {
        temp.add(vec[i]);
    }   
    return temp;
}
void quicksort(std::vector<T> &vec, const int &left, const int &right)
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
template<typename T> void jRray<T>::sort(Comparator<? super E> c)
{

}

template<typename T> void jRray<T>::setSize(int newSize)
{

}

template<typename T> bool jRray<T>::retainAll(T c[])
{

}
template<typename T> bool jRray<T>::retainAll(std::vector<T> c)
{

}
template<typename T> void jRray<T>::retainAll(jRray c)
{

}
template<typename T> void jRray<T>:replaceAll(UnaryOperator<E> operator)
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