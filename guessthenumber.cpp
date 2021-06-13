#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	int n,a,i=0;
	srand(time(0));
	n=rand()%100+1;
//	cout<<"The number generated is "<<n<<endl;
	do
	{
		cout<<"Enter the number"<<endl;
		cin>>a;
		if(a>n)	
			cout<<"Enter a lower number\n";
		else if(n>a)
			cout<<"Enter a higher number\n";
		i++;
	}while(a!=n);
	if(a==n)
		cout<<"You guessed it in "<<i<<" attempts and the number is "<<a<<endl;
	return 0;
}
