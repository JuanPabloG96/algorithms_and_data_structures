#include "../../../include/algorithms/searching_algorithms/lineal_search.h"

template <typename T>
LinealSearch<T>::LinealSearch(T *array, int size)
{
  this->array = array;
  this->element = 0;
  this->size = size;
};

template <typename T>
int LinealSearch<T>::Search(T element)
{
  for (int i = 0; i < size; i++)
  {
    if (array[i] == element)
    {
      return i;
    }
  }
  std::cout << "element not found in the array" << std::endl;
  return -1;
};