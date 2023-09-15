#include "../../../include\algorithms\searching_algorithms\binary_search.h"

template <typename T>
BinarySearch<T>::BinarySearch(T *array, int size)
{
  this->array = array;
  this->size = size;
  this->element = 0;
}

template <typename T>
int BinarySearch<T>::search(T element)
{
  int leftLimit = 0;
  int rightLimit = size - 1;

  while (leftLimit <= rightLimit)
  {
    int center = (leftLimit + rightLimit) / 2;

    if (array[center] == element)
    {
      return center;
    }
    else if (array[center] < element)
    {
      leftLimit = center + 1;
    }
    else
    {
      rightLimit = center - 1;
    }
  }

  std::cout << "Elemento no encontrado en el arreglo" << std::endl;
  return -1;
}