#include <iostream>
#include <array>
using namespace std;

bool validaValor(int saque) {
    return saque > 0 && saque % 5 == 0;
}

array<int, 4> contaNotas(int saque) {
    array<int, 4> notasSeparadas;
    notasSeparadas[0] = saque / 50;
    saque %= 50;
    notasSeparadas[1] = saque / 20;
    saque %= 20;
    notasSeparadas[2] = saque / 10;
    saque %= 10;
    notasSeparadas[3] = saque / 5;
    return notasSeparadas;
}

void exibeNotas(const array<int, 4>& notas) {
    cout << "Qtd. Notas de 50: " << notas[0] << "\n";
    cout << "Qtd. Notas de 20: " << notas[1] << "\n";
    cout << "Qtd. Notas de 10: " << notas[2] << "\n";
    cout << "Qtd. Notas de 5: " << notas[3] << "\n";
}

void executaCaixaEletronico() {
    int saque;
    cout << "Digite o valor a ser sacado: ";
    cin >> saque;

    if (!validaValor(saque)) {
        cout << "Valor inválido! O valor deve ser positivo e múltiplo de 5.\n";
        return;
    }

    array<int, 4> qtdNotas = contaNotas(saque);
    exibeNotas(qtdNotas);
}

int main() {
    char opcao;
    do {
        executaCaixaEletronico();
        cout << "Deseja realizar outro saque? (s/n): ";
        cin >> opcao;
    } while (opcao == 's' || opcao == 'S');

    cout << "Obrigado por usar o Caixa Eletrônico!\n";
    return 0;
}
