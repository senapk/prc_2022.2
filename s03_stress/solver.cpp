#include <iostream>
#include <algorithm> //find, sort, min_element, unique
#include <utility>
#include <vector>
#include <list>

bool exists(std::vector<int> &v, int x) {
    return std::find(v.begin(), v.end(), x) != v.end();
}

bool exists(std::list<int> &v, int x) {
    for (auto &i : v) {
        if (i == x) {
            return true;
        }
    }
    return false;
}


int main() {
    // int x = std::min(4, 5);
    // int a = 6;
    // int b = 9;
    // std::swap(a, b);
    // std::cout << std::exchange(b, 0) << std::endl;

    // std::vector<int> vet {1, 2, 3, 4, 5};
    // auto it = std::find(vet.begin(), vet.end(), 3);
    // if (it == vet.end()) {
    //     std::cout << "not found" << *it << std::endl;
    // }

    // std::list<int> lista {1, 2, 3, 4, 5};
    // auto it = std::find(std::next(lista.begin()), std::prev(lista.end()), 3);
    // if (it == lista.end())
    //     std::cout << "nao achei o 3\n";
    // else
    //     *it = 5;

    // std::vector<int> unsorted = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // auto init = unsorted.begin();
    // std::find(std::next(init, 10), std::next(init, 15), 7);

    // std::sort(unsorted.begin(), unsorted.end());

    // std::vector<std::string> nomes {"ana", "bruno", "andre", "carlos", "ana", "bruno", "andre", "carlos"};
    // std::sort(nomes.begin(), nomes.end());

    std::vector<int> unsorted = {1, -7, 8, -9, 10, -1, 2, -3, 9, 10};
    std::sort(unsorted.begin(), unsorted.end(), [](int a, int b) {
        return std::abs(a) < std::abs(b);
    });

    for (auto &i : unsorted) {
        std::cout << i << " ";
    }

    std::find_if(unsorted.begin(), unsorted.end(), [](auto x){return x > 0;});
}
