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
    bool add(T t);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    void add(int index, T t);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool addAll(jRray c);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    bool addAll(std::vector<T> c);
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

    void addElement(T obj);
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

    T elementAt(int index);
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

#endif