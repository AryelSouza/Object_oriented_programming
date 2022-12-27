#ifndef PILHA_H
#define PILHA_H 

template < class T >
class Pilha
{
public:
  Pilha( int = 10 );
  ~Pilha();
  
  bool push(const T &);
  bool pop(T &);

  bool isEmpty() const { return pos == 0; }
  bool isFull() const { return pos == tam;}
private:
  T *pPtr;
  int pos, tam;
};

template < class T >
Pilha<T>::Pilha( int tam )
{
  this->tam = ( (tam > 0) ? tam : 10 );
  pos = 0;

  pPtr = new T[this->tam];
}

template < class T >
Pilha<T>::~Pilha()
{
  delete [] pPtr;
}

template < class T >
bool Pilha<T>::push(const T &el)
{
  if (!isFull())
  {
    pPtr[pos++] = el;
    return true;
  }
  return false;
}

template < class T>
bool Pilha<T>::pop(T &el)
{
  if (!isEmpty())
  {
    el = pPtr[--pos];
    return true;
  }
  return false;
}

#endif