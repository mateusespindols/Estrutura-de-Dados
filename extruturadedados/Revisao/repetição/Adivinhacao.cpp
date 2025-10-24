#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int segredo = rand() % 100 + 1;  //
    int chute, tentativas = 0;

    cout << "🎲 Adivinhe o número entre 1 e 100!\n";

    do {
        cout << "Digite seu palpite: ";
        cin >> chute;
        tentativas++;

        if (chute > segredo)
            cout << "Muito alto!\n";
        else if (chute < segredo)
            cout << "Muito baixo!\n";
        else
            cout << "🎉 Acertou em " << tentativas << " tentativas!\n";
    } while (chute != segredo);
}
