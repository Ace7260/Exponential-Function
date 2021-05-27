#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   int i,n,j,k;
   float x;
   cout<<"Enter the value u want exp:"<<endl;
   cin>>x;
   float c=1+x;
   for(i=2;i<=20;i++)
   {
       k=1;
       for(j=1;j<=i;j++)
       {
           k=k*j;
       }
       c=c+(pow(x,i)/k);
   }
   cout<<"exp("<<x<<")= "<<c<<endl;
    return 0;

}
//TO BE CONTINUED !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
