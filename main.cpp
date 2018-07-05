#include <iostream>
#include <windows.h>

using namespace std;

int main()
{int i,n,mi,x,ci,cmi,cx;
    cout<<"Introduceti numarul de numere:";
    cin>>n;
    system("cls");
    cout<<"Introduceti primul numar:";
    cin>>mi;
    cmi=mi;
    i=2;
    ci=i;
    while(i<=n)
    {
        system("cls");
        cout<<"Introduceti urmatorul numar:";
        cin>>x;
        if(mi>x)
        {
            mi=x;
        }
        i=i+1;
        Sleep(500);
    }
    system("cls");
    while(ci<=n)
    {
        system("cls");
        cout<<"Introduceti urmatorul numar:";
        cin>>cx;
        if(cmi<cx)
        {
            cmi=cx;
        }
        ci=ci+1;
        Sleep(500);
    }
    system("cls");
    cout<<"Minimumul este:"<<mi<<endl<<"Maximumul este:"<<cmi<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    return 0;
}
