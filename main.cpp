#include <iostream>
#include <chrono>

#include "include/algorithms/search.h"

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

  Search<int> my_element(test, size);

  if (my_element.LinealSearch(element) != -1)
  {
    cout << "El elemento esta en la posición: " << my_element.LinealSearch(element) << " del arreglo." << endl;
  }

  auto end_time = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
  std::cout << "Tiempo de ejecución: " << duration.count() << " micro-segundos" << std::endl;

  return 0;
}
