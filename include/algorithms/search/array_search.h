#include <iostream>

template <typename T>
class ArraySearch
{
private:
  T *array;
  size_t size;

public:
  ArraySearch(T *array, size_t size);
  int LinealSearch(T element);
  int BinarySearch(T element);
  
};

template <typename T>
ArraySearch<T>::ArraySearch(T *array, size_t size)
{
  this->array = array;
  this->size = size;
}

template <typename T>
int ArraySearch<T>::LinealSearch(T element)
{
  for (int i = 0; i < size; i++)
  {
    if (array[i] == element)
    {
      return i;
    }
  }

  std::cout << "Elemento no encontrado en el arreglo" << std::endl;
  return -1;
}

template <typename T>
int ArraySearch<T>::BinarySearch(T element){
  int leftLimit = 0;
  int rightLimit = size -1;

  while(leftLimit <= rightLimit){
    int center = (leftLimit + rightLimit) / 2;
    if(array[center] == element){
      return center;
    }
    else if(array[center] < element){
      leftLimit = center + 1;
    }
    else {
      rightLimit = center - 1;
    }
  }
  std::cout << "El elemento no se encuentra en el arreglo" << std::endl;
  return -1;
}