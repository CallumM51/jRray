/*
 * jRray for c header file
 * all rights reserved to the jRray team
 * visit https://github.com/CallumM51/jRray for more
 */


#ifndef JR_H
#define JR_H

class jRray
{
    int size;
    int capacity;
    int *arr;
    public:
    jRray();
    jRray(int);
    jRray(int, int);
    jRray(const jRray&);
    ~jRray();
    int getSize();
    int getCapacity();
    int get(int);
    void add(int);
    void add(int, int);
    void remove(int);
    void clear();
    bool contains(int);
    bool isEmpty();
    int indexOf(int);
    int lastIndexOf(int);
    void sort();
    void sort(int, int);
    void reverse();
    void reverse(int, int);
    void shuffle();
    void shuffle(int, int);
    void swap(int, int);
};

#endif