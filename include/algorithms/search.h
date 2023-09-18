#include <iostream>

template <typename T>
class Search
{
private:
  T *array;
  int size;
  T element;

public:
  Search(T *array, int size);
  int LinealSearch(T element);
};

template <typename T>
Search<T>::Search(T *array, int size)
{
  this->array = array;
  this->size = size;
  this->element = 0;
}

template <typename T>
int Search<T>::LinealSearch(T element)
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