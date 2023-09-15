#include <iostream>

template <typename T>
class BinarySearch
{
private:
  T *array;
  int size;
  T element;

public:
  BinarySearch(T *array, int size);
  int search(T element);
};