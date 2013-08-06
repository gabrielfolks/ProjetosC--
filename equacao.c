#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char** argv) {
int a,b,c;
    float d,x1,x2;
    
    cout<<"Digite um numero"<<"\n";
    cin>>a;
    cout<<"Digite um numero\n";
    cin>>b;
    cout<<"Digite um numero"<<"\n";
    cin>>c;
    d=(b*b)-(4*a*c);
    
    if(d>0){
        x1= (-b+sqrt(d))/2*a;
        x2= (-b-sqrt(d))/2*a;
        cout<<"Os valores das raizes sao "<<x1<<x2<<"\n";    
            }
    else if(d==0){
         x1= -b/(2*a);
         cout<<"O valor da raiz e "<<x1<<"\n";
         }
    else{
         cout<<"Nao existe raiz "<<"\n";
         }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
