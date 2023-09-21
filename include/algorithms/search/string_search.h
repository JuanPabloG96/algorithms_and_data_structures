#include <iostream>

template <typename T>
class StringSearch{
private:
    T* Text;
    size_t size;

public:
    StringSearch(T* Text, size_t size);
    bool KMP(T* word, size_t word_size);
};

template <typename T>
StringSearch<T>::StringSearch(T* Text, size_t size){
    this->Text = Text;
    this->size = size;
}

template <typename T>
bool StringSearch<T>::KMP(T* word, size_t word_size){
  size_t count = 0;

  for(size_t i = 0; i <= size; i++){
    if(count == word_size){
      return true;
    }
    if(word[count] == Text[i]){
      count++;
    }
    else{
      count = 0;
    }
  }

  return false;
}