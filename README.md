

ATM Cash Withdrawal Simulator

This is a simple program that simulates withdrawing money from an ATM. It calculates how many 50, 20, 10, and 5 reais notes are needed to reach the amount you want to withdraw.

How the Code Works

Including Libraries

```cpp
#include <iostream>
#include <array>
using namespace std;
```

- `#include <iostream>`: For input and output operations.
- `#include <array>`: To use arrays.

`calculateNotes` Function

This function calculates how many notes of each denomination are required for the withdrawal.

```cpp
array<int,4> calculateNotes(int withdrawal) {
    array<int,4> separatedNotes;
    separatedNotes[0] = (withdrawal / 50);
    separatedNotes[1] = ((withdrawal % 50) / 20);
    separatedNotes[2] = (((withdrawal % 50) % 20) / 10);
    separatedNotes[3] = ((((withdrawal % 50) % 20) % 10) / 5);
    return separatedNotes;
}
```

- `withdrawal`: The amount you want to withdraw.
- Returns an array with the number of 50, 20, 10, and 5 reais notes.

Main Function

The main function interacts with you and calls `calculateNotes` to perform the calculations.

```cpp
int main() {
    int withdrawal;
    array<int,4> noteCount;

    cout << "Enter the amount to withdraw: ";
    cin >> withdrawal;

    noteCount = calculateNotes(withdrawal);

    cout << "Number of 50 reais notes: " << noteCount[0] << "\n";
    cout << "Number of 20 reais notes: " << noteCount[1] << "\n";
    cout << "Number of 10 reais notes: " << noteCount[2] << "\n";
    cout << "Number of 5 reais notes: " << noteCount[3] << "\n";

    return 0;
}
```

- `withdrawal`: The amount you want to withdraw.
- `noteCount`: Stores how many notes of each denomination are needed.

Step-by-Step Instructions

1. Compile the program with a C++ compiler.
2. Run the program.
3. Enter the amount you want to withdraw.
4. See the number of notes of each denomination that the program calculates for you.