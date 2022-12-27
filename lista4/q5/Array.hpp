#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
using std::ostream, std::istream;

class Array
{

    // sobrecarga do operador +
    friend Array operator+(const Array &a1, const Array &a2);

  // cout << obj
  friend ostream &operator<<( ostream &, const Array &);

  // cin >> obj
  friend istream &operator>>( istream &, Array &);
public:
  Array( int = 10 );    //construtor-padrão
  Array(const Array &); //construtor de cópia
  ~Array();             //destrutor

  int getSize() const;
    //sobrecarga do operador +=
    const Array &operator+=(const Array &);
  
  const Array &operator=( const Array & ); //operador atribuição. "const Array &" evita algo como (a = b) = c

  bool operator==( const Array & ) const; //operador de igualdade

  bool operator!=( const Array &dir) const
  {
    return !(*this == dir);
  }

  int &operator[](int); //permite modificar o elemento
  int operator[](int) const; //não permite modificar o elemento

private:
  int tam;
  int *arr;
};

#endif