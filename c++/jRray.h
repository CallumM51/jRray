/*
 * jRray for c++ header file
 * all rights reserved to the jRray team
 * visit https://github.com/CallumM51/jRray for more
 */

#ifndef JRRAY_H
#define JRRAY_H
#include <vector>
#include <iterator>
#include <string>

template<class T>

class jRray 
{
    private:
        std::vector<T> vec;
    public:
    //constructors and destructors
    jRray();
    ~jRray();

    //assignment operators
    jRray& operator=( const jRray& other );

    //Methods
    bool add(const T &t);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void add(int index, T t);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool addAll(const jRray &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool addAll(const std::vector<T> &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool addAll(T c[]);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool addAll(int index, jRray c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool addAll(int index, std::vector<T> c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool addAll(int index, T []c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void addElement(const T &obj);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    int capacity();
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void clear();
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    jRray clone();
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool contains(T t);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool containsAll(jRray c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool containsAll(std::vector<T> c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool containsAll(T c[]);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void copyInto(T anArray[]);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    T& at(int index);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    enum<E> elements(); //!!Needs more research
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void ensureCapacity(int minCapacity);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool equals(jRray j);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool equals(std::vector<T> v);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void forEach(Consumer<? super T> action); //!!Most likely remove
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    T get(int index);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    int hashCode();
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    int indexOf(T t);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    int indexOf(T t, int index);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void insertElementAt(T t, int index);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool isEmpty();
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    T lastElement();
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    int lastIndexOf(T t);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    int lastIndexOf(T t, int index);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    T remove(int index);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool remove(T t);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool removeAll(jRray c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool removeAll(std::vector<T> c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool removeAll(T c[]);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void removeAllElements();
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool removeElement(T t);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void removeElementAt(int index);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool removeIf(Predicate<? super E> filter); //!!Maybe 
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void removeRange(int fromIndex, int toIndex);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void replaceAll(UnaryOperator<E> operator); //!!Same implementation as removeIf()
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool retainAll(jRray c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool retainAll(std::vector<T> c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool retainAll(T c[]);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    T set(int index, T element);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void setElementAt(T obj, int index);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    setSize(int newSize);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    int size();
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void sort(Comparator<? super E> c); //!!Needs more research
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    jRray subJrray(int fromIndex, int toIndex);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    std::vector<T> subVector(int fromIndex, int toIndex);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    T[] toArray();
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    T[] toArray(T a[]);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    std::string toString();
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void trimToSize();
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem
};

void jRray::trimToSize()
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
std::vector<T> jRray::subVector(const int &fromIndex,const int &toIndex)
{
    std::vector<T> temp;
    for(int i = fromIndex; i < toIndex; i++)
    {
        temp.push_back(vec[i]);
    }   
    return temp;
}
jRray jRray::subJrray(int fromIndex, int toIndex)
{
    jRray temp;
    for(int i = fromIndex; i < toIndex; i++)
    {
        temp.add(vec[i]);
    }   
    return temp;
}
void jRray::sort(Comparator<? super E> c)
{

}
int jRray::size()
{
    return vec.size();
}
setSize(int newSize)
{

}
void jRray::setElementAt(T obj, int index)
{

}
T jRray::set(int index, T element)
{

}
bool jRray::retainAll(T c[])
{

}
bool jRray::retainAll(std::vector<T> c)
{

}
bool jRray::retainAll(jRray c)
{

}
void jRray::replaceAll(UnaryOperator<E> operator)
{

}
void jRray::removeRange(int fromIndex, int toIndex)
{
    const int size = vec.size();
    const int range = toIndex - fromIndex;
    for(int i = fromIndex; i < size; i++)
    {
        vec[i] = vec[i + range];
    }
}
bool jRray::removeIf(Predicate<? super E> filter)
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
void jRray::removeAllElements()
{

}
bool jRray::removeAll(T c[])
{

}
bool jRray::removeAll(std::vector<T> c)
{

}
bool jRray::removeAll(jRray c)
{

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
void jRray::insertElementAt(T t, int index)
{

}
int jRray::indexOf(T t, int index)
{

}
int jRray::indexOf(T t)
{

}
int jRray::hashCode()
{

}

void jRray::forEach(Consumer<? super T> action)
{

}
bool jRray::equals(std::vector<T> v)
{

}
bool jRray::equals(jRray j)
{

}
void jRray::ensureCapacity(const int &minCapacity)
{

}
enum<E> jRray::elements()
{

}
T& jRray::at(const int &index)
{
    return vec[index];
}
void jRray::copyInto(T anArray[])
{

}
bool jRray::containsAll(T c[])
{

}
bool jRray::containsAll(std::vector<T> c)
{

}
bool jRray::containsAll(jRray c)
{

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
int jRray::capacity()
{

}
void jRray::addElement(T obj)
{

}
bool jRray::addAll(int index, T []c)
{

}
bool jRray::addAll(int index, std::vector<T> c)
{

}
bool jRray::addAll(int index, jRray c)
{

}
bool jRray::addAll(T c[])
{

}
bool jRray::addAll(std::vector<T> c)
{

}
bool jRray::addAll(jRray c)
{
    for(int i = 0; i < c.size(); i++)
    {
        vec.push_back(c.at(i));
    }
    return true;
}
void jRray::add(int index, T t)
{

}
bool jRray::add(T t)
{
    vec.push_back(t);
    return true;
}
jRray& jRray::operator=( const jRray& other )
{

}
jRray::~jRray()
{

}
jRray::jRray()
{

}

#endif