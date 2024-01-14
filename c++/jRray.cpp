#include "jRray.h"
template<class T>
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
    return std::vector<T>(vec.begin() + fromIndex, vec.begin() + toIndex);
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

setSize(int newSize)
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




int jRray::hashCode()
{

}

void jRray::forEach(Consumer<? super T> action)
{

}

void jRray::ensureCapacity(const int &minCapacity)
{

}
enum<E> jRray::elements()
{

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


int jRray::capacity()
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

jRray& jRray::operator=( const jRray& other )
{

}
jRray::~jRray()
{

}
jRray::jRray()
{

}