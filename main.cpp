#include <iostream>
#include <string>
#include <fstream>
#include<map>

using namespace ::std;

string descubrapalavra(int listnumber){
    ifstream entrada("palavras.txt");
    string linha;
    string returno;
    string palavra;
    
    while(getline(entrada, linha, '\0')){
        //cout<< linha<<endl;
        palavra = linha.substr((listnumber*10),5);
        cout<< palavra<< endl;
    }
    return palavra;

}

int main() {
    int listnumber;
    string palavra;
    cout << "Escolha um numero de 1 a 40 analogo a sua palavra:"<< endl;
    cin >> listnumber;
    if(listnumber < 0 || listnumber > 40){
        cout << "Temos somente 40 palavras!"<< endl;
    }
    palavra = descubrapalavra(listnumber);

    
    
    return 0;
}