#include <iostream>
#include <vector>
#include <memory>

struct Pessoa {
    std::string nome;
    Pessoa(std::string nome) {
        this->nome = nome;
        std::cout << "Nascendo " << nome << "\n";
    }
    ~Pessoa() {
        std::cout << "Morrendo " << nome << '\n';
    }
};
int main () {
    Pessoa ana("ana"); //stack
    std::shared_ptr<Pessoa> elvis(new Pessoa("elvis")); //heap
    auto p = elvis;
    (void) elvis;
}