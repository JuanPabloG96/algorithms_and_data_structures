#include <iostream>
#include "node_class/double_node.h"

template <typename T>
class List
{
private:
  DoubleNode<int> test;

public:
  List();
  void Insert(T element);
};