#include <iostream>
#include <memory>

class Pessoa {
public:
    std::string nome;
    int idade;
    Pessoa(std::string nome, int idade): nome{nome}, idade{idade}{
        std::cout << nome << " nasceu\n";
    }
    ~Pessoa() {
        std::cout << nome << " morreu\n";
    }
    std::string str() {
        return nome + ":" + std::to_string(idade);
    }
};


class Motoca {
    std::shared_ptr<Pessoa> pessoa;
    int potencia;
public:
    Motoca(int potencia): potencia(potencia) {
        pessoa = nullptr;
    }

    std::string buzinar() {
        return "P" + std::string(potencia, 'e') + "m";
    }

    void inserir(std::shared_ptr<Pessoa> pessoa) {
        if (this->pessoa == nullptr) {
            this->pessoa = pessoa;
        } else {
            std::cout << "fail: moto ocupada\n";
        }
    }

    std::shared_ptr<Pessoa> remover() {
        if (this->pessoa != nullptr) {
            auto aux = this->pessoa;
            this->pessoa = nullptr;
            return aux;
        }
        std::cout << "fail: moto vazia\n";
        return nullptr;
    }

};


int main() {
    Motoca motoca;
    motoca.inserir(std::make_shared<Pessoa>("ana", 6));
    motoca.inserir(std::make_shared<Pessoa>("bia", 5));
    motoca.inserir(std::make_shared<Pessoa>("leo", 2));
    auto pessoa = motoca.remover();
    motoca.inserir(std::make_shared<Pessoa>("bia", 5));
}