#include <iostream>

template <typename T>
class StringSearch{
private:
    T Text;
    size_t size;

public:
    StringSearch(T Text, size_t size);
    int KMP(T word, size_t word_size);
    int BM(T word, size_t word_size);
};

template <typename T>
StringSearch<T>::StringSearch(T Text, size_t size){
    this->Text = Text;
    this->size = size;
}

template <typename T>
int StringSearch<T>::KMP(T word, size_t word_size){
  int position = 0;
  size_t count = 0;

  for(size_t i = 0; i <= size; i++){
    if(count == word_size){
      return position;
    }
    if(word[count] == Text[i]){
      if(position == 0){
        position = i;
      }
      count++;
    }
    else{
      position = 0;
      count = 0;
    }
  }

  std::cout << "La palabra '" << word << "' no se encuentra en el texto." << std::endl;
  return -1;
}

template <typename T>
int StringSearch<T>::BM(T word, size_t word_size){

}