# Pairs in C++

In C++, the `pair` class is a template class that allows you to store two elements of different types together as a single unit. It is part of the C++ Standard Library and is defined in the `<utility>` header.

### Including the Header

To use pairs in your code, include the `<utility>` header:

```cpp
#include <utility>
```

Including this header provides access to the `pair` class and other utility functions and templates from the C++ Standard Library.

## Creating a Pair
You can create a pair using the following syntax:
```cpp
pair<T1, T2> p;
```
where `T1` and `T2` represent the types of the first and second elements of the pair, respectively.

Here's an example of creating and accessing a pair:
```cpp
pair<int, int> p = {10, 50};
cout << p.first << " " << p.second << endl;
// Output: 10 50
```

## Modifying Pair Elements
You can assign or change the values of a pair's elements using the `first` and `second` member variables.

```cpp
p.first = 100;
p.second = 200;
cout << p.first << " " << p.second << endl;
// Output: 100 200
```

## Nested Pairs
Pairs can be nested within each other to store more than two elements. This is achieved by specifying a pair as the second element of another pair.

```cpp
pair<int, pair<int, int>> np = {10, {30, 40}};
cout << p.first << " " << np.second.first << " " << np.second.second << endl;
// Output: 10 30 40

pair<pair<int, int>, pair<int, int>> npp = {{10, 20}, {30, 40}};
cout << npp.first.first << " " << npp.first.second << " " << npp.second.first << " " << npp.second.second << endl;
// Output: 10 20 30 40
```

## Pair Arrays
You can also declare arrays of pairs to store multiple pairs together.

```cpp
pair<int, int> arr[] = { {10, 20}, {30, 40}, {50, 60} };

for(int i=0; i<3; i++){
    cout << arr[i].first << " " << arr[i].second << " ";
}
// Output: 10 20 30 40 50 60
```

Pairs are useful when you need to combine two or more values into a single entity and manipulate them together. 

They find applications in various algorithms and data structures, such as graph representations, hashing, and more.



I hope this explanation helps you understand pairs in C++!