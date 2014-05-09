#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
vector<long> primeFactors(long n);
bool isPrime(long n);

int main()
{
	long num = 600851475143;
	//long num = 13195;
	vector<long> factors = primeFactors(num);
	for(int i = 0; i < factors.size(); i++){
		cout << factors[i] << endl;
	}
	return 0;
}

vector<long> primeFactors(long n)
{
	vector<long> factors;
	long i = 2;
	while(!isPrime(n)){
		if(isPrime(i)){
			if(n % i == 0){
				factors.push_back(i);
				n/=i;
			} else {
				i++;
			} 
		} else {
			i++;
		}
	}
	factors.push_back(n);
	return factors;
}

bool isPrime(long n)
{
	for(int i = 2; i < ceil(sqrt(n)); i++){
		if(!(n%i)) return false;
	}

	return true;
}
