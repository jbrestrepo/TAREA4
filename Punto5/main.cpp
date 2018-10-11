#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

struct tempo
{
    int hour;
    int min;
    int sec;
};

int main()
{
    bool temp = true;
    tempo countdown;
    int h,m,s;

    cout <<"ingrese la hora"<<endl;
    cin >> h;
    cout <<"ingrese los minutos"<<endl;
    cin >> m;
    cout <<"ingrese los segundos"<<endl;
    cin >> s;

    countdown = {h,m,s};

    cout << countdown.hour <<" : "<<countdown.min <<" : "<<countdown.sec<<endl;


    /*for (int k = countdown.hour; k>=0; k--)
    {
      for (int j=countdown.min; j>=0; j--)
      {
        for (int i=countdown.sec; i>=0; i--)
        {
        Sleep(1000);
        system ("cls");
        cout << setfill ('0') << setw(2) << countdown.hour << " : "  << setfill ('0') << setw(2) << countdown.min << " : " <<setfill ('0') << setw(2) << i <<endl;
        }
        countdown.min = countdown.min -1;


      }
      countdown.hour = countdown.hour -1;
    }*/
    while(temp)
    {
        Sleep(1000);
        system ("cls");
        cout << setfill ('0') << setw(2) << countdown.hour << " : "  << setfill ('0') << setw(2) << countdown.min << " : " <<setfill ('0') << setw(2) << countdown.sec <<endl;
        countdown.sec = countdown.sec -1;

        if(countdown.sec == 0 && countdown.min > 0) {
            countdown.min = countdown.min -1;
            countdown.sec = 59;
        }


        if(countdown.min == 0 && countdown.hour > 0) {
            countdown.hour = countdown.hour -1;
            countdown.sec = 59;
            countdown.min = 59;
         }
        if(countdown.hour == 0 && countdown.min == 0 && countdown.sec == 0) {

            temp = false;
        }
    }

    cout << "Temporizador Ha terminado" <<endl;


}
