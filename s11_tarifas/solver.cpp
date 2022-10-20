#include <iostream>
#include <vector>

enum Label { EXTRATO, SAQUE };

class LabelData {
    std::string name = "error";
public:
    LabelData(Label op) {
        case ...
    }
    std::string getName() {
        return this->name;
    }
};

class Operation {
    int index;
    int saldoResidual;
    int valor;
    Label label;
public:
    Operation(int index, int saldoRes, int valor, Label label);
    std::string str() {
        return LabelData(label).getName();
    }
};

class BalanceManager {
    int saldo;
    std::vector<Operation> extrato;
    int nextIndex;
public:

// DRY - don't repeat yourself

    void addOperation(int value, Label label) {
        saldo += value;
        extrato.push_back(Operation(nextIndex, value, saldo, label));
        nextIndex += 1;
    }
    int getSaldo() {
        return saldo;
    }
};

class Conta {
    BalanceManager manager;
    int id;

    bool saque(int value) {
        if(manager.getSaldo() < value) {
            std::cout << "liso";
            return false;
        }
        manager.addOperation(-value, Label::SAQUE);
    }
};