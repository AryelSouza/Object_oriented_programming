#include <iostream>
#include <fstream>
#include <string>

int main()
{
  
    std::ofstream data_file("data.dat");

  
    if (!data_file.is_open())
    {
        std::cerr << "Erro: não foi possível abrir o arquivo data.dat" << std::endl;
        return 1;
    }

   
    data_file << "Tipo de dado" << "\t" << "Tamanho (bytes)" << std::endl;
    data_file << "int" << "\t" << sizeof(int) << std::endl;
    data_file << "float" << "\t" << sizeof(float) << std::endl;
    data_file << "double" << "\t" << sizeof(double) << std::endl;
    data_file << "char" << "\t" << sizeof(char) << std::endl;
    data_file << "bool" << "\t" << sizeof(bool) << std::endl;


    data_file.close();

    std::cout << "Os resultados foram salvos no arquivo data.dat" << std::endl;

    return 0;
}