#include <iostream>

struct Pet {
    std::string nome;
    int vidas;
    Pet(std::string nome = "", int vidas = 0){
    };
    
    void morrer() {
        if (vidas > 0)
            vidas -= 1;
    }

    int getVidas() {
        return vidas;
    }

    std::string str() {
        return nome + ":" + std::to_string(vidas);
    }
};

std::ostream& operator<<(std::ostream& os, Pet& pet) {
    os << pet.str();
    return os;
}

int main() {
    Pet pet("chaninha", 8);
    int vidas = pet.getVidas();
    std::cout << pet << '\n';
}