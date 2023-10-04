#include <iostream>
#include "node_class/node.h"

template <typename T>
class List
{
private:
  Node<int> test;

public:
  List();
  void Insert(T element);
};