#include<iostream>
using namespace std;
int main()
{
	int n,i,fact=1;
	cin>>n;
	cout<<"enter the number";
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			fact==0;
			cout<<" it is not a prime";
			break;
			
		}
		else
	     cout<<" it is a prime";
	
	}
	return 0;

}
