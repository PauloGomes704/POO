#include <iostream>
#include <string>

class Pessoa{

    std::string nome;
public:
    void steNome(std::string n){
        nome = n;
    }
    std::string getNome(){
        return nome;
    }

};

int main (){
    Pessoa p;
    p.steNome("Matheus");
    std::cout << "O nome é: " << p.getNome();
    return 0;
}
