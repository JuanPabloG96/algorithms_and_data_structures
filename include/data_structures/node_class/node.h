template <typename T>
class Node
{
private:
  T data;
  Node<T> *next;
  Node<T> *prev;

public:
  Node();
  T getData() const;
  void setData(const T &data);
  Node<T> *getNext() const;
  void setNext(Node<T> *next);
  Node<T> *getPrev() const;
  void setPrev(Node<T> *prev);
};

template <typename T>
Node<T>::Node()
{
  this->next = nullptr;
  this->prev = nullptr;
}

template <typename T>
T Node<T>::getData() const
{
  return data;
}

template <typename T>
void Node<T>::setData(const T &data)
{
  this->data = data;
}

template <typename T>
Node<T> *Node<T>::getNext() const
{
  return next;
}

template <typename T>
void Node<T>::setNext(Node<T> *next)
{
  this->next = next;
}

template <typename T>
Node<T> *Node<T>::getPrev() const
{
  return prev;
}

template <typename T>
void Node<T>::setPrev(Node<T> *prev)
{
  this->prev = prev;
}
