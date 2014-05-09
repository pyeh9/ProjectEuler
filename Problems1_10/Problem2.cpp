#include <iostream>
#include <vector>
using namespace std;
vector<long> genFibonacci();
int main()
{
	vector<long> fibo = genFibonacci();
	vector<long>::iterator iter;
	long sum = 0;
	for(iter = fibo.begin(); iter != fibo.end(); iter++){
		if((*iter)%2 == 0){
			sum+=(*iter);	
		}
	}
	cout << sum << endl;
	return 0;
}

vector<long> genFibonacci()
{
	vector<long> fib;
	fib.push_back(1);
	fib.push_back(2);
	long cur = fib[0]+fib[1];
	int i = 2;
	while(fib[i-1]+fib[i-2]<=4000000)
	{
		fib.push_back(fib[i-1]+fib[i-2]);
		i++;
	}	
	return fib;
}
