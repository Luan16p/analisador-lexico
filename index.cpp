#include <iostream>
#include <fstream>

int main(void) {
    std::ifstream inputFile("input.txt");
    
    if(!inputFile.is_open()) {
        std::cout << "Erro ao abrir o arquivo" << '\n';
        return 1;
    }

    std::string line;

    std::cout << "Conteudo: " << '\n';
    while(getline(inputFile, line)) {
        std::cout << line << '\n';
    }

    inputFile.close();

    return 0;
}