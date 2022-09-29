#include <iostream>
#include <vector>
#include <algorithm>

void sort(std::vector<int>& vet) {
    std::sort(vet.begin(), vet.end(), [](auto a, auto b) {
        return std::abs(a) < std::abs(b);
    });
}

int mais1(const int& x) {
    return x + 1;
}   

//lvalue = rvalue

// x - int - 500
// a - int - 504
// c - int - 508
// b - int - 508

//500 -> 10
//504 -> 5
//508 -> 15

int main() {
    int x = 10;
    int a = 5;
    int c = 10 + 5;
    int& b = c;
}
