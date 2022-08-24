#include <iostream>
#include <sstream> //stringstream
#include <vector>

using namespace std;

string fmt(vector<int> vet) {
    stringstream ss;
    ss << "[";
    for (int i = 0; i < (int) vet.size(); i++)
        ss << (i == 0 ? "" : ", ") << vet[i];
    ss << "]";
    return ss.str();
}

struct Pacote {
    double value {0};
};

ostream& operator<<(ostream& os, Pacote pacote) {
    os << pacote.value;
    return os;
}

istream& operator >>(istream& is, Pacote& pacote) {
    is >> pacote.value;
    return is;
}

ostream& operator<<(ostream& os, vector<int> vet) {
    os << "[";
    for (int i = 0; i < (int) vet.size(); i++)
        os << (i == 0 ? "" : ", ") << vet[i];
    os << "]";
    return os;
}

int main() {

    cout << vector<int>{1,2,3,6} << '\n';

    // cout << "Digite um numero: ";
    // Pacote pacote1, pacote2;
    // std::string nome;
    // cin >> pacote1 >> pacote2 >> nome;


    

    // cout << "Voce digitou " << pacote1 << "\n";
    // cout << "Voce digitou " << pacote2 << "\n";

    // string texto {"5.4 banana 6"};
    // double peso {};
    // string fruta {};
    // int qtd {};
    // stringstream ss(texto);
    // ss >> peso >> fruta >> qtd;
    // cout << " " << fruta << " " << qtd << " ";

    //--------

    // string numeros {"3 4 1 2 3 3 4 5 6 7"};
    // stringstream ss(numeros);
    // int value {};
    // int sum {0};
    // while (ss >> value) {
    //     sum += value;
    // }
    // cout << sum << " ";

    //--------

    // cout << fmt({1, 2, 3, 4}) << '\n';
    // {
    // string texto {"eu gosto de comer\nmanga\nno almoco"};
    // // cout << texto;
    // stringstream ss(texto);

    // string line {};
    // while (getline(ss, line, 'n'))
    //     cout << line << '\n';
    // }
    
    //--------
    // stringstream ss("banana;bananeira;goiaba;goiabeira do mato;");
    // string line {};
    // while (getline(ss, line, ';'))
    //     cout << line << '\n';

    
    // std::string nome {"adfakdfa"}; //lista de inicializacao
    // std::string pacote(10, 'X');
    // pacote.size();
    // std::cout << "-" << pacote << "-\n";

    // int a = 5;
    // size_t b = 7;
    // if (a < (int) b)
    //     cout << "menor";
}
