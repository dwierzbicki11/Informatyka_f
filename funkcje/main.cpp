#include <iostream>
#include <math.h>

using namespace std;

int zad1(int a,int b, int c){
    if((pow(a,2)+pow(b,2))==pow(c,2)) return 1;
    else return 0;
}
void zad2(){
    cout << "Trójki liczb pitagorejskich z zakresu od 1 do 10:\n";
    for (int a = 1; a <= 10; ++a) {
        for (int b = 1; b <= 10; ++b) {
            for (int c = 1; c <= 10; ++c) {
                if (zad1(a, b, c)) {
                    cout << a << ", " << b << ", " << c << "\n";
                }
            }
        }
    }
}
void zad3(int tab[], int length) {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = 0; j < length - i - 1; ++j) {
            if (tab[j] > tab[j + 1]) {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}



void zad4(int tab[], int length) {
    for (int i = 0; i < length - 1; ++i) {
        for (int j = 0; j < length - i - 1; ++j) {
            if (tab[j] < tab[j + 1]) {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}
void zad5(){
}
void zad6(){
}
void zad7(){
}
void zad8(){
}
void zad9(){
}
void zad10(){
}

int main()
{
    //zad1
    int a,b,c;
    int tab[]= {3,6,1,8,4,1,9,5};
    int tab2[]= {5,8,1,5,0,4,6,8};
    cout<<"podaj liczbe: ";
    cin>>a;
    cout<<"podaj liczbe: ";
    cin>>b;
    cout<<"podaj liczbe: ";
    cin>>c;
    cout << "zad1" << endl;
    if(zad1(a,b,c)) cout<<"Te liczby sa pitagorejskie"<<endl;
    else cout<<"Te liczby nie sa pitagorejskie"<<endl;

    //zad2
    cout << "zad2" << endl;
    zad2();
    //zad3
    cout << "zad3" << endl;
    int n = sizeof(tab) / sizeof(tab[0]);
    for(int i=0;i<n;i++){
        cout<<tab[i]<<" ";
    }

    zad3(tab,n);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<tab[i]<<" ";
    }
    cout<<endl;
    //zad4
    cout << "zad4" << endl;
    n = sizeof(tab2) / sizeof(tab2[0]);
    for(int i=0;i<n;i++){
        cout<<tab2[i]<<" ";
    }
    zad4(tab2,n);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<tab2[i]<<" ";
    }
    cout<<endl;
    //zad5
    cout << "zad5" << endl;
    zad5();
    //zad6
    cout << "zad6" << endl;
    zad6();
    //zad7
    cout << "zad7" << endl;
    zad7();
    //zad8
    cout << "zad8" << endl;
    zad8();
    //zad9
    cout << "zad9" << endl;
    zad9();
    //zad10
    cout << "zad10" << endl;
    zad10();
    return 0;
}
