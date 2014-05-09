#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n);

int main()
{
	long sum = 2;
	for(int i = 3; i <= 2000000; i+=2){
		if(isPrime(i)) sum+= i;
	}
	cout << sum;
	return 0;
}

bool isPrime(int n)
{
	for(int i=2; i<=ceil(sqrt(n)); i++){
		if(n%i == 0) return false;
	}
	return true;
}
