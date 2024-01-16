template<typename T> jRray<T>::~jRray()
{
    vec.clear();
}

template<typename T> jRray<T>::jRray()
{
    vec = std::vector<T>();
}
template<typename T> jRray<T>::jRray(int size)
{
    vec = std::vector<T>(size);
}
