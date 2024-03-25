#include <iostream>
using namespace std;
int main(){
    //Declaración de variables
    int primerTermino = 1;
    int segundoTermino = 2;
    int tercerTermino = 3;
    int suma = 2;
    while(tercerTermino <= 4000000){
        cout<<primerTermino;
        tercerTermino = primerTermino + segundoTermino;
        primerTermino = segundoTermino;
        segundoTermino = tercerTermino;
        if(tercerTermino % 2 == 0){
            suma = suma + tercerTermino;
        }
        if(tercerTermino<= 4000000){
            cout<<" ; ";
            cout<<tercerTermino;
        }
    }
}
