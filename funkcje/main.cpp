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
int zad5(int n){
    if(n==0) return 1;
    else return n*zad5(n-1);
}
int zad6(int n){
    int result=1;
    for(int i=1;i<=n;i++){
        result*=i;
    }
    return result;
}
int zad7(int n){
    int result = 0;
    int odd = 1;

    while (n >= odd) {
        n -= odd;
        odd += 2;
        result++;
    }

    return result;
}
int zad8(int number){
    int sqrtNumber = sqrt(number);

    if (number % 100 == sqrtNumber)return 1;
    else return 0;
}
int zad9(int number){
    double sqrtNumber = sqrt(number);

    if (sqrtNumber == floor(sqrtNumber)) return 1;
    else return 0;

}
bool zad10(int number){
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
    }

    return true;
}
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
    cout<<"Podaj n:";
    cin>>a;
    cout<<a<<"! = "<<zad5(a)<<endl;
    //zad6
    cout << "zad6" << endl;
    cout<<a<<"! = "<<zad6(a)<<endl;
    //zad7
    cout << "zad7" << endl;
    cout<<"Liczba calkowita pierwiastka z liczby: "<<c<<" to: "<<zad7(c)<<endl;
    //zad8
    cout << "zad8" << endl;
    cout<<"Podaj liczbe: ";
    cin>>a;
    if(zad8(a))cout << "Liczba " << a << " konczy sie swoim pierwiastkiem." << endl;
    else cout << "Liczba " << a << " konczy nie sie swoim pierwiastkiem." << endl;
    //zad9
    cout << "zad9" << endl;

    if(zad9(a))cout << "Liczba " << a << " jest kwadratem liczby calkowitej." <<endl;
    else cout << "Liczba " << a << " nie jest kwadratem liczby calkowitej." <<endl;
    //zad10
    cout << "zad10" << endl;
    if(zad10(a)) cout << "Liczba " << a << " jest liczba pierwsza." << endl;
    else cout << "Liczba " << a << " nie jest liczba pierwsza." << endl;
    return 0;
}
