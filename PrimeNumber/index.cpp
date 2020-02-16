#include<iostream>
using namespace std;

int isPrime(int n)
{
	if(n<=1)
	return -1;

	for(int i=2; i<=n/2; i++)
	{
		if(n%2==0)
		return -1;
	}
	return 1;
}

int main()
{
	cout<<"isPrime? = "<<isPrime(4)<<endl;
	return 0;
}