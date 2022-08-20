#include <iostream>
#include <vector>

std::pair<bool, int> divide(int a, int b) {
    if (b != 0)
        return {true, a / b};
    return {false, 0};
}

std::vector<int> um_a_cinco() {
    return {1, 2, 3, 4, 5};
}

bool existe(std::vector<int> v, int value) {
    for (auto elem : v)
        if (elem == value)
            return true;
    return false; //retorno default
}

//-1 se não existe
int find_of(std::vector<int> v, int value) {
    for (int i = 0; i < (int) v.size(); i++)
        if (v[i] == value)
            return i;
    return -1;
}

bool existe_negativo(std::vector<int> v) {
    for (auto elem : v)
        if (elem < 0)
            return true;
    return false;
}

int pos_neg(std::vector<int> v) {
    for (int i = 0; i < (int) v.size(); i++)
        if (v[i] < 0)
            return i;
    return -1;
}
int pos_neg_menor_x(std::vector<int> v, int x) {
    for (int i = 0; i < (int) v.size(); i++)
        if (v[i] < 0 && v[i] < x)
            return i;
    return -1;
}

int menor_valor(std::vector<int> v) {
    int menor = v[0];
    for (auto elem : v)
        if (elem < menor)
            menor = elem;
    return menor;
}

int pos_menor_valor(std::vector<int> v) {
    int pos = 0;
    for (int i = 0; i < (int) v.size(); i++)
        if (v[i] < v[pos])
            pos = i;
    return pos;
}

//-1
int pos_menor_valor_positivo(std::vector<int> v, int x) {
    int pos = -1;
    for(int i = 0; i < (int)v.size(); i++)
        if (v[i] > 0 && (pos == -1 || v[i] < v[pos]))
            pos = i;
    return pos;

}

int main() {
    std::pair<bool, int> result = divide(10, 0);
    std::cout << result.first << " " << result.second << '\n';

    auto [res, value] = divide (5, 2);
    std::cout << res << " " << value << '\n';

    std::cout << existe(std::vector<int>{1, 2, 3}, 1) << std::endl;
    std::cout << existe({1, 2, 3}, 4) << std::endl;

    std::cout << 
    return 0;
}

