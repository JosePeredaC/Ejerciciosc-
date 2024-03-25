#include <iostream>
using namespace std;

int main() {
    //Declaración de variables
    int inicial = 0;
    int suma = 0;
    //Funcion principal: Mientras "inicial sea menor que 1000" se ejecuta el codigo interior
    while (inicial < 1000){
        cout<<inicial;
        //Busca los valores multiplos de 3 y 5
        if (inicial % 3 == 0){
            suma = suma + inicial;
            cout<<endl;
        }if (inicial % 5 == 0 && inicial % 3 != 0){
            suma = suma + inicial;
            cout<<endl;
        }
        else
            cout<<endl;
        inicial = inicial + 1;
    }
    cout<<"La suma es: "<<suma;
    return 0;
}
