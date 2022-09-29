#include <iostream>

class Tempo {
private:
    int hora;
    int minuto;
    int segundo;
    
public:
    Tempo(int hora, int minuto, int segundo) {
        this->setHora(hora);
        this->setMinuto(minuto);
        this->setSegundo(segundo);
    }

    void setHora(int value) {
        if (value >= 0 && value <= 23)
            hora = value;
    }

    int getHora() {
        return hora;
    }
    void setMinuto(int value) {
        if (value >= 0 && value <= 59)
            minuto = value;
    }
    void setSegundo(int value) {
        if (value >= 0 && value <= 59)
            segundo = value;
    }
    int getMinuto() {
        return minuto;
    }
    int getSegundo() {
        return segundo;
    }
    void imprimir() {
        std::cout << hora << ":" << minuto << ":" << segundo << std::endl;
    }
};

int main() {
    Tempo tempo;
    tempo.setHora(10);
    std::cout << tempo.getHora() << std::endl;
}
