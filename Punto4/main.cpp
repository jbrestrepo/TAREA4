
/*aplicación para imprimir en consola un mensaje que solo se pueda leer
 a través de una clave. El proceso de generar el mensaje se llama
 codificación y la lectura se denomina decodificación.
 La codificación consiste en “desplazar”cada letra de la frase, una cantidad
 determinada de posiciones en al abecedario*/

#include "coding.hpp"

int main()
{
    char mensaje[100];
    int desplaza;

    cout<<"Escriba el mensaje a codificar en minusculas"<<endl;
    gets(mensaje);

    cout<<"Indique la cantidad de letras a desplazarse"<<endl;
    cin>>desplaza;

    coding(mensaje,desplaza);
 }

