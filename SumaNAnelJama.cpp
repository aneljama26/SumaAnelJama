// programa: SumaNAnelJama.cpp
// autor: Anel Jama
// fecha: 2023-09-15
// descripcion: Suma varios numeros


#include<iostream>                                
using namespace std;                                                                                
int main ()
{                                                         
	int i=0,l;
        float x,s=0;                                      
	cout<<"ingrese cantida de numero:";cin>>l;            do{

        cout<<"ingrese x:"; cin>>x;                   
	i=i+1;
        s=s+x;
        }while (i<l);
        cout<<"la suma es: "<<s<<endl;
        return(0);                              
}
