#include "jRray.h"

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
template<typename T> void jRray<T>::sort(Comparator<? super E> c)
{

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




template<typename T> int jRray<T>::hashCode()
{

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

}
template<typename T> bool jRray<T>::containsAll(std::vector<T> c)
{

}
template<typename T> bool jRray<T>::containsAll(jRray c)
{

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