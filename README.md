# ATM Cash Withdrawal Simulator

This is a program that simulates withdrawing money from an ATM. It ensures that the withdrawal amount is valid (a positive multiple of 5) and calculates how many 50, 20, 10, and 5 reais notes are needed.

## How the Code Works

### Including Libraries

```cpp
#include <iostream>
#include <array>
using namespace std;
```

- `#include <iostream>`: For input and output operations.
- `#include <array>`: To use arrays.

### validaValor Function

This function checks if the withdrawal amount is valid.

```cpp
bool validaValor(int saque) {
    return saque > 0 && saque % 5 == 0;
}
```

- `saque`: The amount you want to withdraw.
- Returns `true` if the amount is positive and a multiple of 5; otherwise, returns `false`.

### contaNotas Function

This function calculates how many notes of each denomination are required for the withdrawal.

```cpp
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
```

- `saque`: The amount you want to withdraw.
- Returns an array with the number of 50, 20, 10, and 5 reais notes.

### exibeNotas Function

This function displays the number of notes of each denomination.

```cpp
void exibeNotas(const array<int, 4>& notas) {
    cout << "Qtd. Notas de 50: " << notas[0] << "\n";
    cout << "Qtd. Notas de 20: " << notas[1] << "\n";
    cout << "Qtd. Notas de 10: " << notas[2] << "\n";
    cout << "Qtd. Notas de 5: " << notas[3] << "\n";
}
```

- `notas`: An array containing the number of notes of each denomination.

### executaCaixaEletronico Function

The main function that interacts with the user and performs the calculations.

```cpp
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
```

- `saque`: The amount you want to withdraw.
- Calls `validaValor` to check if the amount is valid.
- Calls `contaNotas` to calculate the number of notes.
- Calls `exibeNotas` to display the results.

### Main Function

The main function that starts the ATM simulator and allows multiple withdrawals.

```cpp
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
```

- `opcao`: Stores the user's choice to continue or stop using the ATM.
- Calls `executaCaixaEletronico` in a loop, allowing multiple transactions.

## Step-by-Step Instructions

1. Compile the program with a C++ compiler.
2. Run the program.
3. Enter the amount you want to withdraw.
4. If the amount is invalid, an error message is displayed.
5. If the amount is valid, the program calculates and displays the number of notes of each denomination.
6. You can choose to perform another withdrawal or exit the program.

This documentation provides an overview of how the ATM Cash Withdrawal Simulator works, detailing each function and the main logic of the program.