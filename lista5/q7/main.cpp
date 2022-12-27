#include "Imovel.hpp"
#include "ImovelNovo.hpp"
#include "ImovelVelho.hpp"

int main(){
    ImovelNovo imovelNovo("Rua 1", 100, 10);
    ImovelVelho imovelVelho("Rua 2", 100, 10);
   //getters
    cout << "Imovel Novo" << endl;
    cout << "Endereco: " << imovelNovo.getEndereco() << endl;
    cout << "Preco: " << imovelNovo.getPreco() << endl;
    cout << "Adicional: " << imovelNovo.getAdicional() << endl;
    cout << "Imovel Velho" << endl;
    cout << "Endereco: " << imovelVelho.getEndereco() << endl;
    cout << "Preco: " << imovelVelho.getPreco() << endl;
    cout << "Desconto: " << imovelVelho.getDesconto() << endl;
    //setters
    imovelNovo.setEndereco("Rua 3");
    imovelNovo.setPreco(200);
    imovelNovo.setAdicional(20);
    imovelVelho.setEndereco("Rua 4");
    imovelVelho.setPreco(200);
    imovelVelho.setDesconto(20);
    cout << "Imovel Novo" << endl;
    cout << "Endereco: " << imovelNovo.getEndereco() << endl;
    cout << "Preco: " << imovelNovo.getPreco() << endl;
    cout << "Adicional: " << imovelNovo.getAdicional() << endl;
    cout << "Imovel Velho" << endl;
    cout << "Endereco: " << imovelVelho.getEndereco() << endl;
    cout << "Preco: " << imovelVelho.getPreco() << endl;
    cout << "Desconto: " << imovelVelho.getDesconto() << endl;
    //imprime
    imovelNovo.imprime();
    imovelVelho.imprime();
    
    return 0;
}