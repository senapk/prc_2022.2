#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> unique(std::vector<int> vet) {
    auto existe = [](auto vet, auto value) {
        for (auto elem : vet)
            if (elem == value)
                return true;
        return false;
    };

    
    std::vector<int> unique;
    for (auto elem : vet)
        if (!existe(unique, elem)) 
            unique.push_back(elem);

    return unique;
}

bool existe(std::vector<int> &v, int x) {
    return std::find(v.begin(), v.end(), x) != v.end();
}

int main() {
    auto print = [](auto x) { std::cout << x << "\n"; };

    auto eziste = [](auto value, auto vet) {
        return existe(vet, value);
    };

    []() { 
        std::cout << "Hello World" << std::endl;
    }();

    auto soma = [](auto a, auto b) {
        return a + b;
    };

    int c = soma(4, 5);
    auto x = soma(4.5, 5.5);
    auto y = soma(std::string("Hello "), std::string("World"));

    int x = 10;
    auto soma_com_x = [&](int a) {
        x++;
        return a + x;
    };

    int c = soma_com_x(5);
    std::cout << c << '\n';
}