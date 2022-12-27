#ifndef ARRAYLIST_H
#define ARRAYLIST_H

class ArrayList
{
public:
friend ArrayList somaArray(ArrayList a, ArrayList b), subArray(ArrayList a, ArrayList b), mulArray(ArrayList a, ArrayList b), divArray(ArrayList a, ArrayList b);
  ArrayList(int);
  ~ArrayList();
    int busca(int);
    void remove(int);
    void removeEl(int);

  ArrayList &add(int);

  void print() const;

private:
  int *arr;
  int tam;
  int pos;
};

#endif