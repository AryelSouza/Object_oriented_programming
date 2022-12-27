#include <iostream>
#include <fstream>
using namespace std;

const int MAX_TOOLS = 100;

// Estrutura de dados para armazenar informações de uma ferramenta
class Tool {
    public:
        int id; // Número de identificação da ferramenta
        string name; // Nome da ferramenta
        int quantity; // Quantidade da ferramenta disponível
        double price; // Preço da ferramenta

        // Construtor padrão
        Tool() {
            id = -1;
            name = "";
            quantity = 0;
            price = 0.0;
        }

        // Construtor que inicializa os atributos de uma ferramenta
        Tool(int id, string name, int quantity, double price) {
            this->id = id;
            this->name = name;
            this->quantity = quantity;
            this->price = price;
        }
};

int main() {
    // Cria um arquivo de saída para escrever os dados
    ofstream outFile("hardware.dat", ios::binary);

    // Verifica se o arquivo foi criado com sucesso
    if (!outFile) {
        cerr << "Erro ao criar o arquivo!" << endl;
        return 1;
    }

    // Cria um vetor de ferramentas
    Tool tools[MAX_TOOLS];

    // Lê os dados das ferramentas
    for (int i = 0; i < MAX_TOOLS; i++) {
        cout << "Digite o número de identificação da ferramenta: ";
        cin >> tools[i].id;
        cout << "Digite o nome da ferramenta: ";
        cin >> tools[i].name;
        cout << "Digite a quantidade da ferramenta: ";
        cin >> tools[i].quantity;
        cout << "Digite o preço da ferramenta: ";
        cin >> tools[i].price;
        cout << endl;
    }

    // Escreve os dados das ferramentas no arquivo
    outFile.write(reinterpret_cast<char *>(tools), sizeof(Tool) * MAX_TOOLS);

    // Fecha o arquivo
    outFile.close();

    return 0;
}
