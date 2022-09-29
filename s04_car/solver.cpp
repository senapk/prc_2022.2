#include <iostream>
#include <vector>

struct Car {
    int number;
    
    Car(int number) {
        this->number = number;
        std::cout << "Estou criando o carro " << number << "\n";
    }
    ~Car() {
        std::cout << "Estou destruindo um carro " << number << '\n';
    }
};


int main () {
    Car carro(1);
    {
        {
            Car * carro2 = &carro;
            
            Car & carro4 = carro;

            carro4.number = 7;
            carro2->number = 9;

            auto& atalho = carro.number;
            atalho = 8;
        }
        Car carro3(3);
    }
}