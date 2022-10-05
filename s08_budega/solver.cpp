#include <iostream>
#include <list>
#include <vector>
#include <queue>
#include <algorithm>
#include <unordered_set>

class Coisa {
    int x;
public:
    Coisa(int x) : x(x) {}
    int operator++() { //coisa++
        int aux = x;
        x++;
        return aux;
    }
    int operator++(int) { //++coisa
        x++;
        return x;
    }
};

int main() {
    Coisa c{6};
    std::cout << c++ << std::endl;
    std::cout << ++c << std::endl;

    std::string(500, 'x');
    std::vector<int> v(1000, 0);
    std::vector<int> vet {7, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vet.insert(vet.begin(), 324);
    std::cout << vet.front()++; //1
    std::cout << *(++vet.begin())++; //
    
    

    vet.erase(vet.begin() + 3);
    
    std::list<int> lista {3, 1, 3, 5, 6, 7, 9};
    lista.erase(std::next(lista.begin(), 3));
    auto it = std::find(lista.begin(), lista.end(), 9);

    if (it == lista.end()) {
        std::cout << "9 not found" << std::endl;
    } else {
        lista.erase(it);
    }

    for (auto elem : lista) {
        std::cout << elem << " ";
    }

    for (auto it = std::next(lista.begin()); it != std::prev(lista.end()); ++it) {
        std::cout << *it << " ";
    }


}