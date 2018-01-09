#include <iostream>


using namespace std;


int main()

{


    int x(0);

    int i(0);

    int j(0);

    int n(0);

    int y(0);

    char c = '+';



    cout<< "Geben Sie die Anzahl Reihen ein!" << endl;


    cin>> x;


    y = x*x;


    for (i = x; i>0; i--){ // Schleife zählt von anzahl Reihen pro Zeile Runter bis 0 //



        for (j = i; j>1; j--){ // in der Schleife zählt die Variable j pro Reihe von 1 bis zu Anzahl Reihen hoch und gibt die Leehrschläge aus //


            cout<<"o";


            }


        for (n = 0; n<(x*2+1)-(i*2); n++){


            cout<<"+";


        }


        cout<<endl;


        }


}