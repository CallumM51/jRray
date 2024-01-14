#include "jRray.h"
template<class T>
int jRray::size()
{
    return vec.size();
}
void jRray::setElementAt(const T &obj,const int &index)
{
    vec[index] = obj;
}


T jRray::set(const int &index,const T &element)
{
    T temp = vec[index];
    vec[index] = element;
    return temp;
}

void jRray::removeElementAt(int index)
{
    vec.erase(vec.begin() + index);
}


bool jRray::removeElement(T t)
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

T jRray::remove(int index)
{
    T temp = vec[index];
    vec.erase(vec.begin() + index);
    return temp;
}

int jRray::lastIndexOf(const T &t, const int &index)
{

}
int jRray::lastIndexOf(const T &t)
{
    for(auto i = vec.size() - 1; i >= 0; i--)
    {
        if(vec[i] == t)
        {
            return i;
        }
    }
    return -1;
}

T jRray::lastElement()
{
    return vec.back();
}
bool jRray::isEmpty()
{
    return vec.empty();
}

void jRray::insertElementAt(const T &t, const int &index)
{
    vec.insert(vec.begin() + index, t);
}
int jRray::indexOf(T t, int index)
{

}
int jRray::indexOf(T t)
{
    for(int i = 0; i < vec.size(); i++)
    {
        if(vec[i] == t)
        {
            return i;
        }
    }
    return -1;
}

bool jRray::equals(std::vector<T> v)
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
bool jRray::equals(jRray j)
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

T& jRray::at(const int &index)
{
    return vec[index];
}

bool jRray::contains(const T &t)
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
jRray jRray::clone()
{

}
void jRray::clear()
{
    vec.clear();
}
void jRray::add(int index, T t)
{
    vec.insert(vec.begin() + index, t);
}
bool jRray::add(T t)
{
    vec.push_back(t);
    return true;
}
void jRray::addElement(T obj)
{
    vec.push_back(obj);
}