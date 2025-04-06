#include <iostream>
#include <string>
#include <sstream>

using namespace std;
void binarizacao(int valor, int *binario, int *conta){
    int i = 0;
    while(valor!= 0){
        if(valor % 2 != 0){
            binario[i] = 1;
        }else{
            binario[i] = 0;
        }
       // cout << "valor = " << valor<< endl;
       // cout << "binario = " << binario[i]<< endl;
        valor = valor/2;
        i = i + 1;
    }

    *conta = i;

}

int main(){
    int valor;
    int binario[70] = {0};
    int conta;

    cout << "Bem vindo ao conversor de binario" << endl;
    cout << "Digite o valor que deseja converter" << endl;
    cin >> valor;
    binarizacao(valor, binario, &conta);
   // cout << "conta: " << conta<< endl;
    cout << "Numero em binario:"<< endl;
    for(int i = conta -1; i != -1; i--){
        cout << binario[i];
    }
    return 0;
    //szuster se estiver vendo isso me fale no whatsapp

}