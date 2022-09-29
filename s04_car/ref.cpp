#include <iostream>

int main() {
    int a = 6;
    int b = a;
    int& c = b; //crie uma referencia c para a var b
    (void) c;
    int * d; //crie um ponteiro para inteiro d
    (void) d;
    d = &b; //d recebe o endereço de b

    std::cout << (&a) << '\n';
    std::cout << d << '\n';
    std::cout << (*d) << '\n';//pular para valor (dereferencia)


    esquerda
    * = ponteiro   para
    & = referencia para

    direita
    * = ir para valor de
    & = endereço de 
}