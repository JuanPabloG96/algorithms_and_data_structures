#include <iostream>
#define maxElement 10

template <typename T>
class Stack
{
private:
  T array[maxElement];
  int top;
  bool StackEmpty();

public:
  Stack();
  T Pop();
  T StackTop();
  void Push(T element);
  void EmptyStack();
  void PrintStack();
  bool StackFull();
};

template <typename T>
Stack<T>::Stack()
{
  top = -1;
}

template <typename T>
void Stack<T>::Push(T element)
{
  if (!StackFull())
  {
    top++;
    array[top] = element;
  }
  else
  {
    std::cout << "The stack is full." << std::endl;
  }
}

template <typename T>
T Stack<T>::Pop()
{
  T topValue = -1;
  if (!StackEmpty())
  {
    topValue = array[top];
    top--;
  }
  else
  {
    std::cout << "The stack is empty." << std::endl;
  }
  return topValue;
}

template <typename T>
T Stack<T>::StackTop()
{
  T lastElement = Pop();
  Push(lastElement);
  return lastElement;
}

template <typename T>
void Stack<T>::EmptyStack()
{
  top = -1;
  std::cout << "\nThe stack has been clear." << std::endl;
}

template <typename T>
void Stack<T>::PrintStack()
{
  if (!StackEmpty())
  {
    for (int i = top; i >= 0; i--)
    {
      std::cout << "Position: " << i << " Element: " << array[i] << std::endl;
    }
  }
  else
  {
    std::cout << "The stack is empty." << std::endl;
  }
}

template <typename T>
bool Stack<T>::StackEmpty()
{
  return top == -1;
}

template <typename T>
bool Stack<T>::StackFull()
{
  return top == (maxElement - 1);
}
