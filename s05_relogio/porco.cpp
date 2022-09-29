#include <iostream>
#include <map>
enum Moeda {M5, M10, M25, M50, M100};
struct MoedaProp {
    int value;
    int volume;
    std::string nome;
};

MoedaProp getMoedaProp(Moeda moeda) {
    std::map<Moeda, MoedaProp> m = {
        {M5,  { 5, 1, "M5"}}, 
        {M10, {10, 2, "M10"}},
        {M25, {25, 3, "M25"}},
        {M50, {50, 4, "M50"}}
    };
    return m[moeda];
}


int main() {
}