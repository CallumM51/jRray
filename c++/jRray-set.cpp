#include "jRray.h"

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
