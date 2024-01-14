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
#include <unordered_set>
#include <set>
#include <functional>
template <typename T> struct Comparator {
    bool operator()(T x, T y) const {
       return true;
    }
};
template <typename T> struct Condition {
    bool operator()(T x) const {
       return true;
    }
};
template<typename T> class jRray
{
    private:
        std::vector<T> vec;
    public:
    //constructors and destructors
    jRray();
    ~jRray();

    jRray(jRray<T> &j);
    jRray(std::vector<T> &v);
    jRray(T t[], int size);
    jRray(int size);
    //assignment operators
    jRray<T>& operator=( const jRray<T>& other );

    //Methods
    bool add(const T &t);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void add(const int &index,const T &t);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool addAll(const jRray<T> &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool addAll(const std::vector<T> &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool addAll(const T &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool addAll(const int &index, const jRray<T> &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool addAll(const int &index,const std::vector<T> &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool addAll(const int &index, const T &c);
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

    jRray<T> clone();
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool contains(const T &t);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool containsAll(const jRray<T> &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool containsAll(const std::vector<T> &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool containsAll(const T &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void copyInto(T anArray[]);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    T& at(const int &index);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    std::set<T> elements(); //!!Needs more research
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void ensureCapacity(const int &minCapacity);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool equals(jRray<T> j);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool equals(std::vector<T> v);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void forEach(const std::function<void(T)> func); 
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    T get(const int &index);
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

    int indexOf(const T &t, const int &index);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void insertElementAt(const T &t,const int &index);
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

    int lastIndexOf(const T &t);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    int lastIndexOf(const T &t,const int &index);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    T remove(const int &index);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool remove(const T &t);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool removeAll(const jRray<T> &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool removeAll(const std::vector<T> &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool removeAll(const T &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void removeAllElements();
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool removeElement(const T &t);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void removeElementAt(const int &index);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool removeIf(const Condition<T> &func); //!!Maybe 
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void removeRange(const int &fromIndex,const int &toIndex);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void replaceAll(const Condition<T> &func); //!!Same implementation as removeIf()
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool retainAll(const jRray &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool retainAll(const std::vector<T> &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool retainAll(const T &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    T set(const int &index,const T &element);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void setElementAt(const T &obj,const int &index);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void setSize(const int &newSize);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    int size();
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void sort(const Comparator<T> &c); //!!Needs more research
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    jRray subJrray(const int &fromIndex,const int &toIndex);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    std::vector<T> subVector(const int &fromIndex,const int &toIndex);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    T toArray();
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    T toArray(const T &a);
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


#endif