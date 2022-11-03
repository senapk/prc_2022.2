#include <iostream>
#include <vector>
#include <algorithm>
#include <ctype.h>

class CPF {
    std::string number;
public:
    bool isValid() {
        return CPF::validade(this->number);
    }

    static bool validade(std::string cpf){
        std::string valid = "0123456789.()";
        int sum = 0;
        for (char c : cpf) {
            if (valid.find(c) == -1) {
                return false;
            }
            if(c >= 'A' && c <= 'Z')
                c += 'a' - 'A';

        }
    }
};

struct Pessoa {
    std::string name;
    int idade;
    Pessoa(std::string name, int idade):
        name(name), idade(idade){}
    std::string str() {
        return name + " " + std::to_string(idade);
    }
};


int main() {
    // std::vector<std::string> nomes = {"analice", "cid", "bianca"};
    // std::sort(nomes.begin(), nomes.end(), [](auto a, auto b) {
    //     return a.size() > b.size();
    // });
    // for (auto n : nomes)
    //     std::cout << n << '\n';

    std::vector<Pessoa> pessoas;
    pessoas.push_back({"Bia", 8});
    pessoas.push_back({"Ana", 3});
    pessoas.push_back({"Cid", 5});

    std::sort(pessoas.begin(), pessoas.end(), [](auto a, auto b) {
        if (a.name != b.name)
            return a.name < b.name;
        return a.idade < b.idade;
    });

    for (auto p : pessoas)
        std::cout << p.str() << '\n';
}