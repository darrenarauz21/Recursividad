#include<iostream>
using namespace std;

int binomial(int,int);

int main()
{
  int n,k,resultado;
  char opcion='y';
  do
  {
    	cout<<"\n\nINGRESE EL VALOR DE n : ";
    	cin>>n;
    	cout<<"INGRESE EL VALOR DE k : ";
    	cin>>k;
    	resultado=binomial(n,k);
    	cout<<endl;
    	cout<<"COEFICIENTE BINOMIAL - C("<<n<<","<<k<<") ES : "<<resultado;
    	cout<<endl;
    	cout<<"\nDESEA CONTINUAR? (y/n) : ";
    	cin>>opcion;
  }while(opcion=='y');
return 0;
}
int binomial(int n,int k)
{
  if(k==0 || k==n)
    return 1;
return binomial(n-1,k)+binomial(n-1,k-1);
}
