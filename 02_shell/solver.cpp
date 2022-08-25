#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>

bool in(std::vector<int> vet, int value) {
    for (auto elem : vet)
        if (elem == value)
            return true;
    return false;
}

double average(std::vector<int> vet) {
    double value {};
    for (auto elem : vet)
        value += abs(elem);
    return value / vet.size();
}

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

std::vector<int> to_vet(std::string data) {
    std::vector<int> vet;
    for (auto elem : split(data.substr(1, data.size() - 2), ','))
        vet.push_back(to<int>(elem));
    return vet;
}

std::string fmt(std::vector<int> vet) {
    std::stringstream ss;
    ss << "[";
    for(int i = 0; i < (int) vet.size(); i++)
        ss << (i != 0 ? "," : "") << vet[i];
    ss << "]";
    return ss.str();
}

std::string fmt(bool value) {
    return value ? "true" : "false";
}

std::string fmt(double value) {
    std::stringstream ss;
    ss << std::fixed << std::setprecision(2) << value;
    return ss.str();
}
int main() {
    while (true) {
        std::string line {};
        std::getline(std::cin, line); //ler a linha
        auto ui = split(line, ' ');   //quebrar em uma lista de palavras
        auto cmd = ui[0];

        if (cmd == "end") {
            break;
        } else if (cmd == "in") {// in [1,2,3] 4
            std::cout << fmt(in(to_vet(ui[1]), to<int>(ui[2]))) << '\n';
        } else if (cmd == "average") {
            std::cout << fmt(average(to_vet(ui[1]))) << '\n';
        } else {            
            std::cout << "fail: comando invalido\n";
        }
    }
}