#include <iostream>
#include <vector>
#include <list>
#include <memory>
#include <algorithm>

struct Pet {
    std::string nome;
    int vidas;
    Pet(std::string nome = "", int vidas = 0): nome(nome), vidas(vidas){};
    std::string str() {
        return nome + ":" + std::to_string(vidas);
    }
};

std::ostream& operator<<(std::ostream& os, Pet pet) {
    os << pet.str();
    return os;
}
std::ostream& operator<<(std::ostream& os, std::shared_ptr<Pet> pet) {
    os << (pet == nullptr ? "null" : pet->str());
    return os;
}



using PPets = std::shared_ptr<Pet>;
int main() {
    std::list<PPets> pets = {std::make_shared<Pet>("tom", 1), 
                               std::make_shared<Pet>("linda", 7)};
    pets.push_back(std::make_shared<Pet>("chaninha", 7));
    pets.push_back(nullptr);
    pets.push_back(std::make_shared<Pet>("rex", 1));
    pets.push_back(std::make_shared<Pet>("garfield", 3));

    auto it = std::find_if(pets.begin(), pets.end(), [](auto elem) {
        return elem != nullptr && elem->nome == "rex";
    });
    if (it != pets.end())
        pets.insert(it, std::make_shared<Pet>("thor", 8));

    for (auto it = pets.begin(); it != pets.end(); ++it) {
        auto pet = *it;
        if (pet != nullptr && pet->nome == "rex") {
            pets.erase(it);
            break;
        }
    }


    for (auto pet : pets)
        std::cout << pet << '\n';
}