#include <iostream>
#include <array>
using namespace std;


array<int, 4> contaNotas(int saque) {
    array<int, 4> notasSeparadas;
    notasSeparadas[0] = (saque / 50);
    notasSeparadas[1] = ((saque % 50) / 20);
    notasSeparadas[2] = (((saque % 50) % 20) / 10);
    notasSeparadas[3] = ((((saque % 50) % 20) % 10) / 5);
    return notasSeparadas;
}


int main() {

    int saque;
    array<int, 4> qtdNotas;

  
    cout << "Digite o valor a ser sacado: ";
    cin >> saque;

    if (saque % 5 != 0) {
        cout << "O valor deve ser múltiplo de 5.\n";
        return 1;
    }

    
    qtdNotas = contaNotas(saque);


    cout << "Qtd. Notas de 50: " << qtdNotas[0] << "\n";
    cout << "Qtd. Notas de 20: " << qtdNotas[1] << "\n";
    cout << "Qtd. Notas de 10: " << qtdNotas[2] << "\n";
    cout << "Qtd. Notas de 5: " << qtdNotas[3] << "\n";

    
    return 0;
}
