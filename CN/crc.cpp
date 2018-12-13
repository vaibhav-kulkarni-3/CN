#include<iostream>
using namespace std;

int main()
{
	int divisor[10],code[20],dn,mn,padbits,n;
	int temp0[10],temp1[10];
	cout<<"\nEnter no. of bits in divisor : ";
	cin>>dn;
	padbits = dn-1;
	cout<<"\nEnter divisor bits : ";
	for(int i=0;i < dn;i++)
	{
		cin>>divisor[i];
	}
	cout<<"\nEnter no. of bits in message code : ";
	cin>>mn;
	n = mn + padbits;
	for(int i=0;i < mn;i++)
	{
		cin>>code[i];
	}
	for(int i=mn;i < n;i++)
	{
		code[i] = 0;
	}
	
	cout<<"\n"<<n;
	cout<<"\nDividant : ";
	for(int i=0;i < n;i++)
	{
		cout<<code[i];
	}
	for(int i=0;i < dn;i++)
	{
		temp1[i] = divisor[i];
		temp0[i] = 0;
	}
	
	return(0);
}
