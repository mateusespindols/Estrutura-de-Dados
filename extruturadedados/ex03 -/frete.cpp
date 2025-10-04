#include <iostream>
using namespace std;

int main() 
{     float var, vareal;
      int frete = 15;
      
    cout << "Insira o valor da sua compra";
    cin>> var;
    
    vareal = var + frete;
    
    if (var>=100){
       cout << "\nFrete Gratis!!!"<< endl;
    }
    else {
        cout << "\nO valor final com o frete ficou: " << vareal << endl;
    }
    
    return 0;
}