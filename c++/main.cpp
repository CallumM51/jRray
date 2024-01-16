#include "jRray.h"

int main(){
    jRray<int> a;
    for(int i = 0; i < 10; i++)
    {
        int rand = std::rand() % 1000;
        a.add(rand);
        std::cout << rand << std::endl;
    }
    std::cout << "I love you" << std::endl;
    a.sort(Comparator<int>());
    jRray<int> b;
    b.addAll(a);
    for(int i = 0; i < a.size(); i++)
    {
        std::cout << a.get(i) << std::endl;
    }
    return 0;
}