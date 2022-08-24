#include <iostream>

int main() {
    int sum {0};
    while (true) {
        int value {}; //explicito que será lido
        std::cin >> value;
        if (value == -1)
            break;
        sum += value;
    }
    std::cout << "A soma eh " << sum << "\n";
}