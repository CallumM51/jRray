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
    /* int capacity()
    * extension of std::vector.capacity()
    * see std::vector.capacity() documentation
    * 
    * Requires: 
    *      none
    * Returns: 
    *      int
    */

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

    T removeAt(const int &index);
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
    /* bool removeAll(const jRray &c)
    * removes all elements from this jRray object matching an element found in the jRray argument "c"
    * 
    * Requires:
    *      "c" is a valid jRray object
    * Returns:
    *      true if this jRray changed as a result of this call
    *      false otherwise
    */

    bool removeAll(const std::vector<T> &c);
    /* bool removeAll(const std::vector<T> &c)
    * removes all elements from this jRray object matching an element found in the std::vector<T> argument "c"
    * 
    * Requires:
    *      "c" is a valid std::vector<T> object
    * Returns:
    *      true if this jRray changed as a result of this call
    *      false otherwise
    */

    bool removeAll(const T &c);
    /* bool removeAll(const T &c)
    * removes all elements from this jRray object matching the T argument "c"
    * 
    * Requires:
    *      "c" is a valid T object
    * Returns:
    *      true if this jRray changed as a result of this call
    *      false otherwise
    */

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
    /* bool removeIf(const Condition<T> &func)
    * removes all elements "i" from this jRray object where func(i) returns true
    * 
    * Requires:
    *      "c" is a valid jRray object
    * Returns:
    *      true if a list item is removed
    *      false otherwise
    */

    void removeRange(const int &fromIndex,const int &toIndex);
    /* void removeRange(const int &fromIndex, const int &toIndex)
    * removes all elements from this jRray from indexes fromIndex(inclusive) to toIndex(exclusive)
    * 
    * Requires:
    *      0 <= fromIndex <= toIndex < this.vec.size()
    * Returns:
    *      void
    */

    void replaceAll(const Condition<T> &func); //!!Same implementation as removeIf()
    /* void replaceAll(UnaryOperator<E> operator)
    * replaces all elements from this jRray object with the result of applying the UnaryOperator<E> "operator" to them
    * 
    * Requires:
    *      "operator" is a valid UnaryOperator<E> object
    * Returns:
    *      void
    */

    bool retainAll(const jRray &c);
    /* bool retainAll(const jRray &c)
    * removes all elements from this jRray object except for those also found in the jRray argument "c"
    * 
    * Requires:
    *      "c" is a valid jRray object
    * Returns:
    *      true if this jRray changed as a result of this call
    *      false otherwise
    */

    bool retainAll(const std::vector<T> &c);
    /* bool retainAll(const std::vector<T> &c)
    * removes all elements from this jRray object except for those also found in the std::vector<T> argument "c"
    * 
    * Requires:
    *      "c" is a valid std::vector<T> object
    * Returns:
    *      true if this jRray changed as a result of this call
    *      false otherwise
    */

    bool retainAll(const T &c);
    /* bool retainAll(const T &c)
    * removes all elements from this jRray object except for those that match the T argument "c"
    * 
    * Requires:
    *      "c" is a valid T object
    * Returns:
    *      true if this jRray changed as a result of this call
    *      false otherwise
    */

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

    template <typename A>
    T toArray(const A &a);
    //REQUIRES:
    //  lorem
    // PROMISES:
    //  lorem

    std::string toString();
    /* std::string toString()
    * return elements of jRRay object as a string
    * elements are separated by ',' and wrapped by '[' and ']' e.g. temp = "[1,2,3]"
    * 
    * Requires: 
    *      none
    * Returns: 
    *      std::string
    */

    void trimToSize();
    /* void trimToSize()
    * extension of std::vector.shrink_to_fit()
    * see std::vector.shrink_to_fit() documentation
    * 
    * Requires: 
    *      none
    * Returns: 
    *      void
    */
};


#endif