#include <iostream>
using namespace std;


int main(){
    float valores[15];
    float soma = 0;

    for(int i = 0; i < 15; i++){
        cout << "Digite o valor " << i + 1 <<":";
        cin >> valores[i];
    }
   for (int i = 0; i < 15; i++) {
        soma += valores[i];
    }

    cout << "\nSoma: R$ " << soma << endl;

    return 0;
}
