
#include <iostream>
#include <memory>


int main() {
    // int * p = new int(6); //um inteiro com valor 6
    // std::cout << p << " " << *p << '\n'; //6
    // delete p;
    // std::cout << p << " " << *p << '\n'; //6
    // p = nullptr;
    {
        auto p = std::make_shared<int>(6);
        {
            auto q = p;
            auto r = q;
        }
        std::cout << p.use_count() << '\n';
        std::cout <<  *p << '\n';
    }
}












