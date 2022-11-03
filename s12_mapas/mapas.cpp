

#include <iostream>
#include <vector>
//ordenação intrínseca
//1. quando eu preciso manter ordenação
#include <map> //arvore Java: TreeMap
#include <set> //arvore Java: TreeSet

//não tenho ordenação
//todo o resto
#include <unordered_map> //tabela hash Java: HashMap
#include <unordered_set> //tabela hash Java: HashSet

int main() {
    // std::vector<int> vet = {1, 2, 6, 7, 3, 3, 2, 9, 0, 8, 9, 1, 10};
    // std::unordered_set<int> conj(vet.begin(), vet.end());
    // for (auto x : conj) {
    //     std::cout << x << " ";
    // }

    std::vector<int> vet {1, 2, 6, 7, 3, 3, 2, 9, 0, 8, 9, 1, 10};
    vet[50] = 100; //sem verificacao de indice

    std::map<std::string, int> mapa;
    mapa["um"] = 1;  //acesso destrutivo sem verificação
    mapa["dois"] = 2; //escrita 
    mapa["tres"] = 3;
    mapa["quatro"] = 4;
    mapa["cinco"] = 5;
    mapa["seis"] = 6;
    mapa["sete"] = 7;
    mapa["oito"] = 8;

    // for (std::pair<std::string, int> par : mapa) {
    //     std::cout << par.first << ":" << par.second << std::endl;
    // }

    //javascript destructed assignment
    //c++        structured binding

    auto [x, y, z] = std::make_tuple(1, 4.5, 'b');

    auto par = std::make_pair(std::string("banana"), 6.7);
    auto& [a, b] = par;
    par.first = "uva";
    a = "uva";

    for (auto it = mapa.begin(); it != mapa.end(); it++) {
        auto& [chave, valor] = *it;
        std::cout << chave << ":" << valor << std::endl;
    }

    for (auto& [k, v] : mapa) {
        v++;
    }


    // std::cout << mapa["oitho"] << '\n'; //leitura

    // if (mapa.count("sete") == 1) {
    //     std::cout << " o valor de 7 eh " << mapa["sete"] << '\n';
    // } else {
    //     std::cout << "nao achei o sete\n";
    // }

    auto it = mapa.find("sete");
    if (it != mapa.end()) {
        std::cout << " o valor de 7 eh " << it->second << '\n';
    } else {
        std::cout << "nao achei o sete\n";
    }

    it = mapa.find("cinco");
    
    if (it != mapa.end()) {
        auto& [k, v] = *it;
        mapa.erase(it);
    }



    return 0;
}