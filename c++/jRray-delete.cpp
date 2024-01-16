#include "jRray.h"

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
