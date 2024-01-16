#include "jRray.h"

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

// template<typename T> bool jRray<T>::retainAll(const T &c)
// {
//     std::vector<T> tmp;

//     for(T temp : this.vec)
//     {
//         bool keep = false;
        
//         if(temp != cTemp)
//         {
//             tmp.push_back(temp);
//         }
//     }

//     this.removeAll(tmp);
//     return true;
// }
// template<typename T> bool jRray<T>::retainAll(const std::vector<T> &c)
// {
//     std::vector<T> tmp;

//     for(T temp : this.vec)
//     {
//         bool keep = false;

//         for(T cTemp : c)
//         {
//             newVec.push_back(vec[i]);
//         }
//         else{
//             changed = true;
//         }
//     }
//     vec = newVec;
//     return changed;
// }
template<typename T> bool jRray<T>::retainAll(const jRray &c)
{
     std::unordered_set<T> set;
    for(int i = 0; i < c.size(); i++)
    {
        set.insert(c.at(i));
    }
    std::vector<T> newVec;
    bool changed = false;
    for(int i = 0; i < vec.size(); i++)
    {
        if(set.find(vec[i]) != set.end())
        {
            newVec.push_back(vec[i]);
        }
        else{
            changed = true;
        }
    }
    vec = newVec;
    return changed;
}

// template<typename T> void jRray<T>::replaceAll(const Condition<T> &func)
// {
//     int current = 0;
//     for(int i = 0; i < vec.size(); i++)
//     {
//         if(func(vec[i]))
//         {
//             tmp.push_back(temp);
//         }
//     }
//     vec.resize(current);
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


template<typename T> bool jRray<T>::removeIf(const Condition<T> &func)
{
    int current = 0;
    for(int i = 0; i < vec.size(); i++)
    {
        if(func(vec[i]))
        {
            current++; 
            T temp = vec[i];
            vec[i] = vec[current];
            vec[current] = temp;
        }
    }
    vec.resize(current);
    return true;
}

template<typename T> void jRray<T>::removeAllElements()
{
    vec.clear();
}

// template<typename T> bool jRray<T>::removeAll(const T &c[])
// {
//     std::unordered_set<T> set;
//     for(int i = 0; i < c.size(); i++)
//     {
//         set.insert(c[i]);
//     }
//     std::vector<T> newVec;
//     bool changed = false;
//     for(int i = 0; i < vec.size(); i++)
//     {
//         if(set.find(vec[i]) != set.end())
//         {
//             newVec.push_back(vec[i]);
//         }
//         else{
//             changed = true;
//         }
//     }
//     vec = newVec;
//     return changed;
// }
template<typename T> bool jRray<T>::removeAll(const std::vector<T> &c)
{
    std::unordered_set<T> set;
    std::vector<T> newVec;
    for(int i = 0; i < c.size(); i++)
    {
        set.insert(c[i]);
    }
    bool changed = false;
    for(int i = 0; i < vec.size(); i++)
    {
        if(set.find(vec[i]) != set.end())
        {
            newVec.push_back(vec[i]);
        }
        else{
            changed = true;
        }
    }
    vec = newVec;
    return changed;
}
template<typename T> bool jRray<T>::removeAll(const jRray &c)
{
    std::unordered_set<T> set;
    std::vector<T> newVec;
    for(int i = 0; i < c.size(); i++)
    {
        set.insert(c.at[i]);
    }
    bool changed = false;
    for(int i = 0; i < vec.size(); i++)
    {
        if(set.find(vec[i]) != set.end())
        {
            newVec.push_back(vec[i]);
        }
        else{
            changed = true;
        }
    }
    vec = newVec;
    return changed;
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

// template<typename T> bool jRray<T>::containsAll(const T &c)
// {
//     std::unordered_set<T> set;
//     for(int i = 0; i < vec.size(); i++)
//     {
//         set.insert(vec[i]);
//     }
// }
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

// template<typename T> bool jRray<T>::addAll(const int &index, const T &c)
// {
//     for(int i = 0; i < c.size(); i++)
//     {
//         vec.insert(vec.begin() + index, c[i]);
//     }
//     return true;
// }
template<typename T> bool jRray<T>::addAll(const int &index, const std::vector<T> &c)
{
    for(int i = 0; i < c.size(); i++)
    {
        vec.insert(vec.begin() + index, c[i]);
    }
    return true;
}
template<typename T> bool jRray<T>::addAll(const int &index, const jRray &c)
{
    for(int i = 0; i < c.size(); i++)
    {
        vec.insert(vec.begin() + index, c.at(i));
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

template<typename T> typename std::vector<T>::iterator jRray<T>::begin()
{
    return vec.begin();
}

template<typename T> typename std::vector<T>::iterator jRray<T>::rbegin()
{
    return vec.rbegin();
}

template<typename T> typename std::vector<T>::iterator jRray<T>::end()
{
    return vec.end();
}

template<typename T> typename std::vector<T>::iterator jRray<T>::rend()
{
    return vec.rend();
}

template<typename T> typename std::vector<T>::const_iterator jRray<T>::cbegin()
{
    return vec.cbegin();
}

template<typename T> typename std::vector<T>::const_iterator jRray<T>::crbegin()
{
    return vec.crbegin();
}

template<typename T> typename std::vector<T>::const_iterator jRray<T>::cend()
{
    return vec.cend();
}

template<typename T> typename std::vector<T>::const_iterator jRray<T>::crend()
{
    return vec.crend();
}

template<typename T> T& jRray<T>::operator[](const int& index)
{
    return vec[index];
}

template<typename T> jRray<T>& jRray<T>::operator=( const jRray<T>& other )
{
    vec = other.vec;
}

template<typename T> jRray<T>::~jRray()
{
    vec.clear();
}

template<typename T> jRray<T>::jRray()
{
    vec = std::vector<T>();
}
template<typename T> jRray<T>::jRray(int size)
{
    vec = std::vector<T>(size);
}
