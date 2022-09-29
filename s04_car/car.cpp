#include <iostream>
#include <sstream>
#include <vector>

struct Car {
    int pass {0};
    int passMax {0};
    int gas {0};
    int gasMax {0};
    
    //1. sempre inicialize
    //2. sempre deixe um construtor default

    //sobrecarga de método
    Car(int passMax, int gasMax = 0) {
        this->passMax = passMax;
        this->gasMax = gasMax;
    }

    //método
    void entrar() {
        if (pass == passMax) {
            std::cout << "fail: carro lotado\n";
        } else {
            pass += 1;
        }
    }

    void sair() {
        if (pass == 0) {
            std::cout << "fail: carro vazio\n";
        } else {
            pass -= 1;
        }
    }

    //metodo
    std::string str() {
        std::stringstream ss;
        ss << "pass: " << pass << "/" << passMax;
        return ss.str();
    }
};

int main() {
    Car car(2);
    std::cout << car.str() << '\n';
    car.entrar();
    std::cout << car.str() << '\n';
    car.entrar();
    std::cout << car.str() << '\n';
    car.entrar();
    car.sair();
    std::cout << car.str() << '\n';
    
    

}