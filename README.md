# jRray

jRray is a library which adds the functionality of [Java vectors](https://docs.oracle.com/javase/8/docs/api/java/util/Vector.html) from JDK 1.8 (most recent) in c/c++. While most methods have been added, we all know you're just here for the ```contains()``` method.

## About jRray for c++
jRray for c++ is a wrapper for the [std::vector](https://en.cppreference.com/w/cpp/container/vector) library. While not all methods have been recreated, most methods have. For justifications and the teams suggestions for work arounds on missing features refer to the missing features section.
  ### Removed Features
  * spliterator()

As Spliterators are objects only found in Java used for working with [Java Streams](https://docs.oracle.com/javase/8/docs/api/java/util/stream/Stream.html) the inclusion of this method does not provide value to C++ users without also duplicating the function of Java streams which has been left out of the scope of this project.
  
  * iterator()

Because jRray is a wrapper for std::vector which contanins pre-built [vector iterators](https://en.cppreference.com/w/cpp/container/vector#iterators) that tend to be better out of the box than java, jRray provides direct access to the iterators of the underlying vector.

* listIterator()


    

  ### Added Features

## About jRray for c
lorem

## Adding jRray as a includeable library
tbd
