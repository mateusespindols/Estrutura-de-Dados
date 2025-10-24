#include <iostream>
using namespace std;

int main() 
{   int minutos;
    cout << "\nDigite a quantidade de minutos: \n";
    cin>> minutos;
    
    
    int horas, resto;
    
    horas = minutos / 60;
    resto = minutos % 60;
    
    
     cout << horas << " Horas e " << resto << " minutos";
    
    
    
    
    
    
    
    return 0;
}