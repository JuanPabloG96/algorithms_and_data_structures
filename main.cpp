#include <string>
#include <cstring>
#include <chrono>

#include "include/algorithms/search/string_search.h"
#include "include/data_structures/stack.h"

using namespace std;

int main()
{
  auto start_time = std::chrono::high_resolution_clock::now();
  // Test area

  // Test area
  auto end_time = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
  std::cout << "\nCode run time: " << duration.count() << " microseconds" << std::endl;

  return 0;
}