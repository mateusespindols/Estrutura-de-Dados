#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

vector<string> bichos = {
    "Avestruz", "Águia", "Burro", "Borboleta", "Cachorro",
    "Cabra", "Carneiro", "Camelo", "Cobra", "Coelho",
    "Cavalo", "Elefante", "Galo", "Gato", "Jacaré",
    "Leão", "Macaco", "Porco", "Pavão", "Peru",
    "Touro", "Tigre", "Urso", "Veado", "Vaca"
};

void gerarPalpite() {
    int numero = rand() % 10000; 
    int doisUltimos = numero % 100;
    int grupo = (doisUltimos / 4) % 25;
    string bicho = bichos[grupo];
    
    cout << "Número: ";
    cout.width(4);
    cout.fill('0');
    cout << numero << endl;
    cout << "Bicho: " << bicho << endl;
    cout << "Grupo: " << (grupo + 1) << endl;
}

void analisarNumero() {
    cout << "Digite um número (0000-9999): ";
    string input;
    cin >> input;
    
    try {
        int numero = stoi(input);
        if (numero >= 0 && numero <= 9999) {
            int doisUltimos = numero % 100;
            int grupo = (doisUltimos / 4) % 25;
            string bicho = bichos[grupo];
            
            cout << "Número: ";
            cout.width(4);
            cout.fill('0');
            cout << numero << endl;
            cout << "Bicho: " << bicho << endl;
            cout << "Grupo: " << (grupo + 1) << endl;
        } else {
            cout << "Número inválido! Digite entre 0000 e 9999." << endl;
        }
    } catch (const exception& e) {
        cout << "Número inválido!" << endl;
    }
}

int main() {
    srand(time(0)); 
    
    cout << "GERADOR DE PALPITES - JOGO DO BICHO" << endl;
    
    while (true) {
        cout << "\n1 - Gerar palpite" << endl;
        cout << "2 - Analisar número" << endl;
        cout << "3 - Sair" << endl;
        cout << "Escolha: ";
        
        string opcao;
        cin >> opcao;
        
        if (opcao == "1") {
            gerarPalpite();
        } else if (opcao == "2") {
            analisarNumero();
        } else if (opcao == "3") {
            cout << "Até mais!" << endl;
            break;
        } else {
            cout << "Opção inválida!" << endl;
        }
    }
    
    return 0;
}