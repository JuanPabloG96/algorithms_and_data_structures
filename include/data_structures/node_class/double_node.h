template <typename T>
class DoubleNode
{
private:
  T data;
  DoubleNode<T> *next;
  DoubleNode<T> *prev;

public:
  DoubleNode();
  /* ~DoubleNode(); */
  T getData() const;
  void setData(const T &data);
  DoubleNode<T> *getNext() const;
  void setNext(DoubleNode<T> *next);
  DoubleNode<T> *getPrev() const;
  void setPrev(DoubleNode<T> *prev);
};

template <typename T>
DoubleNode<T>::DoubleNode()
{
  this->next = nullptr;
  this->prev = nullptr;
}

template <typename T>
T DoubleNode<T>::getData() const
{
  return data;
}

template <typename T>
void DoubleNode<T>::setData(const T &data)
{
  this->data = data;
}

template <typename T>
DoubleNode<T> *DoubleNode<T>::getNext() const
{
  return next;
}

template <typename T>
void DoubleNode<T>::setNext(DoubleNode<T> *next)
{
  this->next = next;
}

template <typename T>
DoubleNode<T> *DoubleNode<T>::getPrev() const
{
  return prev;
}

template <typename T>
void DoubleNode<T>::setPrev(DoubleNode<T> *prev)
{
  this->prev = prev;
}
