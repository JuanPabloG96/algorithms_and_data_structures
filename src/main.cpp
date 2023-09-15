#include <iostream>
#include <chrono>

#include "../include/algorithms/searching_algorithms/lineal_search.h"
#include "../include/algorithms/searching_algorithms/binary_search.h"

using namespace std;

int main()
{

  auto start_time = std::chrono::high_resolution_clock::now();

  // Código que deseas medir
  int test[10000];

  for (int i = 0; i < 10000; i++)
  {
    test[i] = i + 1;
  }

  int size = sizeof(test) / sizeof(test[0]);
  int element = 9999;

  LinealSearch<int> lineal(test, size);
  BinarySearch<int> binary(test, size);

  /* if (binary.search(element) != -1)
  {
    cout << "El elemento " << element << " se encuentra en la posición " << binary.search(element) << " del arreglo" << endl;
  } */
  if (lineal.Search(element) != -1)
  {
    cout << "El elemento " << element << " se encuentra en la posición " << lineal.Search(element) << " del arreglo" << endl;
  }

  auto end_time = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
  std::cout << "Tiempo de ejecución: " << duration.count() << " microsegundos" << std::endl;

  return 0;
}
