#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
bool isPrime(long n);

int main()
{
	int count = 2;
	long num = 3;
	while(count < 10001){
		num+=2;
		if(isPrime(num)){
			cout << num << endl;
			count++;
		}
	}
	return 0;
}

bool isPrime(long n)
{
	for(int i = 2; i <= ceil(sqrt(n)); i++){
		if(n%i == 0) return false;
	}

	return true;
}


