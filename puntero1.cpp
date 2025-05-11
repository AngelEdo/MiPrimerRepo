#include <iostream>

using namespace std;

int main(){

    const char *cadena = "Hola mundo";
    char cadena2[] = "Hola mundo";

    //primera forma de recorrer cadena 
    cout << "\n\n Primera forma \n "; 
    for (int i=0; cadena[i] != '\0'; i++)
         cout << cadena[i] << "";

    //segunda forma 
    cout << "\n\n Segunda forma \n ";
    for (int i=0; *(cadena+i) != '\0'; i++)
       cout << *(cadena+i) <<"";

    //segunda forma 
    cout << "\n\n Tercer forma \n ";
    for (; *cadena != '\0';cadena++)
       cout << *cadena <<"";
    

    return 0;
}