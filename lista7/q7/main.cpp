#include <iostream>
#include <string>
using namespace std;
#include <stdexcept>

void lanca_excecao1()
{
  
  throw range_error("Exemplo heranca x excecao.");
}

void lanca_excecao2()
{
  
  throw logic_error("Exemplo heranca x excecao.");
}

void lanca_excecao3()
{
  
  throw invalid_argument("Exemplo heranca x excecao.");
}

int main()
{
  try
  {
    lanca_excecao1();
  }
  catch (range_error &e)
  {
    cout << "Excecao capturada: " << e.what() << endl;
  }
  catch (logic_error &e)
  {
    cout << "Excecao capturada: " << e.what() << endl;
  }
  catch (invalid_argument &e)
  {
    cout << "Excecao capturada: " << e.what() << endl;
  }
  catch (exception &e)
  {
    cout << "Excecao capturada: " << e.what() << endl;
  }
  catch (...)
  {
    cout << "Excecao capturada: " << endl;
  }

  try
  {
    lanca_excecao2();
  }
  catch (range_error &e)
  {
    cout << "Excecao capturada: " << e.what() << endl;
  }
  catch (logic_error &e)
  {
    cout << "Excecao capturada: " << e.what() << endl;
  }
  catch (invalid_argument &e)
  {
    cout << "Excecao capturada: " << e.what() << endl;
  }
  catch (exception &e)
  {
    cout << "Excecao capturada: " << e.what() << endl;
  }
  catch (...)
  {
    cout << "Excecao capturada: " << endl;
  }

  try
  {
    lanca_excecao3();
  }
  catch (range_error &e)
  {
    cout << "Excecao capturada: " << e.what() << endl;
  }
  catch (logic_error &e)
  {
    cout << "Excecao capturada: " << e.what() << endl;
  }
  catch (invalid_argument &e)
  {
    cout << "Excecao capturada: " << e.what() << endl;
  }
  catch (exception &e)
  {
    cout << "Excecao capturada: " << e.what() << endl;
  }
  catch (...)
  {
    cout << "Excecao capturada: " << endl;
  }

  return 0;
}