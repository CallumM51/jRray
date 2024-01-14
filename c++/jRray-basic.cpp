#include "jRray.h"

int jRray::size()
{
    return vec.size();
}
void jRray::setElementAt(T obj, int index)
{

}


T jRray::set(int index, T element)
{

}

void jRray::removeElementAt(int index)
{

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

int jRray::lastIndexOf(T t, int index)
{

}
int jRray::lastIndexOf(T t)
{
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

}

bool jRray::equals(std::vector<T> v)
{

}
bool jRray::equals(jRray j)
{

}

T& jRray::at(const int &index)
{
    return vec[index];
}

bool jRray::contains(T t)
{

}
jRray jRray::clone()
{

}
void jRray::clear()
{

}
void jRray::add(int index, T t)
{

}
bool jRray::add(T t)
{
    vec.push_back(t);
    return true;
}
void jRray::addElement(T obj)
{

}