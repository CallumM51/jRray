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

template<typename T> class jRray
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

    void add(const int &index,const T &t);
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

    bool addAll(const int &index, const jRray &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool addAll(const int &index,const std::vector<T> &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool addAll(const int &index, T []c);
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

    bool contains(const T &t);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool containsAll(const jRray &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool containsAll(const std::vector<T> &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool containsAll(const T c[]);
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

    bool removeAll(const jRray &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool removeAll(const std::vector<T> &c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool removeAll(const T c[]);
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

    bool removeIf(Predicate<? super E> filter); //!!Maybe 
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void removeRange(const int &fromIndex,const int &toIndex);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void replaceAll(UnaryOperator<E> operator); //!!Same implementation as removeIf()
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

    bool retainAll(const T c[]);
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

    setSize(const int &newSize);
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


#endif