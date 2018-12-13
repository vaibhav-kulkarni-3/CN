#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int Devident[20], Divisor[20], i, Rem[20], Que[20], append[20], app;
  int dvd, divs;
  cout<<"Enter The number Of The Divident Bit"<<endl;
  cin>>dvd;
  cout<<"Enter The Bits Of The Divident"<<endl;
  for(i=0; i<dvd; i++)
  { 
     cin>>Devident[20];
  }
  
  cout<<"Enter The number Of The Divisor bit"<<endl;
  cin>>divs;
  cout<<"Enter The Bits Of The Divisor"<<endl;
  { 
     cin>>Divisor[20];
  }
  
  cout<<"The Divident is ";
  for(i=0;i<dvd; i++)
  {
     cout<<Devident[20]<<" ";
  }
  
  for(i=0;i<divs; i++)
  {
     cout<<Divisor[20]<<" ";
  }
  
  app=divs-1;
  for(i=0; i<app; i++)
  {
    append[i]=0;
  }
  
  for(i=0; i<app; i++)
  {
    Devident[i+2]=append[i];
  }
   
  cout<<"The Divident is ";
  for(i=0;i<dvd; i++)
  {
     cout<<Devident[20]<<" ";
  }
  
 return 0; 
}
