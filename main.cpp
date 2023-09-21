#include <iostream>
#include <string>
#include <cstring>
#include <chrono>

#include "include/algorithms/search/string_search.h"

using namespace std;

int main(){
  auto start_time = std::chrono::high_resolution_clock::now();
  //Test area

  string text = "akdonqwoihcaksndw";
  string word = "onqwo";
  size_t size = text.length();
  size_t word_size = word.length();

  StringSearch<string> element(&text, size);

  if(element.KMP(&word, word_size)){
    cout << "La palabra '" << word << "' se encuentra en el texto '" << text << "'" << endl;
  }
  else{
    cout << "No se encontro la palabra en el texto" << endl;
  }

  //Test area
  auto end_time = std::chrono::high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);
  std::cout << "Tiempo de ejecución: " << duration.count() << " micro-segundos" << std::endl;

  return 0;
}