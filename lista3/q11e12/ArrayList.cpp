#include "ArrayList.hpp"
#include <iostream>

using namespace std;

ArrayList::ArrayList(int tam)
{
  this->tam = tam;
  arr = new int[tam];
  pos = 0;
}

ArrayList::~ArrayList()
{
  delete[] arr;
}

int ArrayList::busca(int el)
{
  for (int i = 0; i < pos; i++)
    if (arr[i] == el)
      return i;
  return -1;
}

void ArrayList::remove(int i)
{
  if (i < 0 || i >= pos)
    return;
  for (int j = i; j < pos - 1; j++)
    arr[j] = arr[j + 1];
  pos--;
}


void ArrayList::removeEl(int el)
{
  int i = busca(el);
  if (i == -1)
    return;
  remove(i);
}

ArrayList &ArrayList::add(int el)
{
  if (pos == tam)
    return *this;
  arr[pos++] = el;
  return *this;
}

void ArrayList::print() const
{
  for (int i = 0; i < pos; i++)
    cout << arr[i] << " ";
  cout << endl;
}

ArrayList somaArray(ArrayList a, ArrayList b)
{
  ArrayList c(a.tam + b.tam);
  for (int i = 0; i < a.pos; i++)
    c.add(a.arr[i]);
  for (int i = 0; i < b.pos; i++)
    c.add(b.arr[i]);
  return c;
}

ArrayList subArray(ArrayList a, ArrayList b)
{
  ArrayList c(a.tam + b.tam);
  for (int i = 0; i < a.pos; i++)
    c.add(a.arr[i]);
  for (int i = 0; i < b.pos; i++)
    c.removeEl(b.arr[i]);
  return c;
}

ArrayList mulArray(ArrayList a, ArrayList b)
{
  ArrayList c(a.tam + b.tam);
  for (int i = 0; i < a.pos; i++)
    for (int j = 0; j < b.pos; j++)
      if (a.arr[i] == b.arr[j])
        c.add(a.arr[i]);
  return c;
}

ArrayList divArray(ArrayList a, ArrayList b)
{
  ArrayList c(a.tam + b.tam);
  for (int i = 0; i < a.pos; i++)
    c.add(a.arr[i]);
  for (int i = 0; i < b.pos; i++)
    if (c.busca(b.arr[i]) != -1)
      c.removeEl(b.arr[i]);
  return c;
}


