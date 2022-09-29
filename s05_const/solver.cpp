#include <iostream>

struct Dog {
    std::string nome;
    Dog(std::string nome = ""): nome(nome) {
    }
};
struct Pessoa {
    std::string name;
    Dog dog;
    Pessoa(std::string name, std::string dogname){
        this->name = name;
        this->dog = Dog(dogname);
    }
    std::string str() const {
        return "Name: " + name + " Dog: " + dog.nome;
    }
};

std::ostream& operator<<(std::ostream& os, const Pessoa& p) {
    return os << p.str();
}

int main() {
    std::cout << Pessoa("Joao", "Rex") << std::endl;
    return 0;
}