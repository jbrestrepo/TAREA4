#include "coding.hpp"

void coding (char *mensaje, int desplaza)
{
    int size,aux;

    size=strlen(mensaje);

    for(int i=0;i<size;i++)
    {

      aux=mensaje[i];

      if(aux+desplaza>122)
      {
            aux=((aux+desplaza)-122)+96;
      }
      else
      {
            aux=aux+desplaza;
      }

      if(mensaje[i]!=' ')
      {
           mensaje[i]=aux;
      }
    }

    cout<<"El mensaje codificado es: "<<mensaje<<endl;



    size=strlen(mensaje);

    for(int i=0;i<size;i++)
    {
      //
      aux=mensaje[i];

      if(aux-desplaza<97)
      {
            aux=122-(96-(aux-desplaza));
      }
      else
      {
            aux=aux-desplaza;
      }

      if(mensaje[i]!=' ')
      {
            mensaje[i]=aux;
      }
    }

    cout<<"El mensaje decodificado es: "<<mensaje<<endl;

    getch();
}
