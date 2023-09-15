#include <iostream>

template <typename T>
class LinealSearch
{
private:
  T *array;
  T element;
  int size;

public:
  LinealSearch(T *array, int size);
  int Search(T element);
};