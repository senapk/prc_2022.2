#include <iostream>
#include <vector>
#include <sstream>



std::vector<std::string> split(std::string texto, char sep) {
    std::stringstream ss(texto);
    std::string token {};
    std::vector<std::string> vet;
    while(getline(ss, token, sep))
        vet.push_back(token);
    return vet;
}

template <typename T>
T to(std::string data) {
    T value {};
    std::stringstream(data) >> value;
    return value;    
}

std::vector<int> from_vet(std::string data) {
    std::vector<int> vet;
    for (auto elem : split(data.substr(1, data.size() - 2), ','))
        vet.push_back(to<int>(elem));
    return vet;
}

std::string fmt(std::vector<int> vet) {
    
}

int main() {
    auto vet = from_vet("[1,2,3]");
    for (auto elem : vet)
        std::cout << elem << " ";
    return 0;

    while (true) {
        std::string line {};
        std::getline(std::cin, line); //ler a linha
        auto ui = split(line, ' ');   //quebrar em uma lista de palavras
        auto cmd = ui[0];

        if (cmd == "end") {
            break;
        } else if (cmd == "soma") {// soma 5 9
            std::cout << (to<int>(ui[1]) + to<int>(ui[2])) << '\n';
        } else if (cmd == "soma_all") {// soma_all [1,2,3,7]
            std::cout << (to<int>(ui[1]) + to<int>(ui[2])) << '\n';
        } else {
            std::cout << "fail: comando invalido\n";
        }
    }
}