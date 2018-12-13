#include<iostream>
using namespace std;

int main()
{
	int data[10];
	int recdata[10],e1,e2,e3,errpos;
	cout<<"\nEnter Message code : \n";
	cin>>data[0];
	cin>>data[1];
	cin>>data[2];
	cin>>data[4];
	data[6] = data[0]^data[2]^data[4];
	data[5] = data[0]^data[1]^data[4];
	data[3] = data[0]^data[1]^data[2];
	cout<<"\nHamming Code Generated : ";
	for(int i=0;i < 7;i++)
	{
		cout<<data[i];
	}
	
	cout<<"\nEnter received bits : \n";
	for(int i=0;i<7;i++)
	{
		cin>>recdata[i];
	}
	e3 = recdata[3]^recdata[2]^recdata[1]^recdata[0];
	e2 = recdata[5]^recdata[1]^recdata[4]^recdata[0];
	e1 = recdata[6]^recdata[4]^recdata[2]^recdata[0];

	errpos = e3*4+e2*2+e1;
	if(errpos != 0)
	{
		cout<<"\nError is present at position : "<<errpos;
	}
	else
	{
		cout<<"\nError is not present";
		goto end;
	}
	cout<<"\nReceived data is : ";
	for(int i=0;i<7;i++)
		cout<<recdata[i];
	cout<<"\nCorrected Hamming Code is : ";
	if(recdata[7-errpos] == 1)
	{
		recdata[7-errpos] = 0;
	}
	else
	{
		recdata[7-errpos] = 1;
	}
	
	for(int i=0;i < 7;i++)
	{
		cout<<recdata[i];
	}
	end:
	cout<<endl;
	return(0);
}


