#include "ArrayList.hpp"

int main()
{
  ArrayList a(10), b(10);
  a.add(1).add(2).add(3).add(4).add(5);
  b.add(3).add(4).add(5).add(6).add(7);
  ArrayList c = somaArray(a, b);
  c.print();
  c = subArray(a, b);
  c.print();
  c = mulArray(a, b);
  c.print();
  c = divArray(a, b);
  c.print();

  c.remove(0);
    c.print();
    c.removeEl(2);
    c.print();
    c.removeEl(3);
    c.print();
  return 0;
}