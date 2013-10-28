#include <iostream>

using namespace std;

int main()
{ int Numero,Suma; //se declaran las variables que vamos a utilizar en el programa.
    Suma=0;

    cout<<"Ingrese un numero..>";  //aqui pedimos que ingrese un numero y con el cin se gusrda el numero que se ingreso.
    cin>>Numero;

    while (Numero>0)
    {
       Suma= Suma + (Numero % 10);
       Numero=Numero/10;

    }
      /*Se tiene que dividir el numero entre 10 y luego tiene que devolver el ultimo numero del residuo
      este proceso se realiza hasta que el numero llege a 0 */
    cout<<"la Suma de Digitos es..>"<<Suma;

    return 0;
}
