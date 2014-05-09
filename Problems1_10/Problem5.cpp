#include <iostream>

using namespace std;
long gcd(long, long);
long lcm(long, long);

int main()
{
	long res = 1;
	for(int i = 2; i <= 20; i++){
		res = lcm(res, i);
	}
	cout << res << endl;
	return 0;
}

long gcd(long a, long b) 
{ 
	if (b==0) return a;
	return gcd(b, a % b); 
}

long lcm(long a, long b)
{
	//cout << a << " " << b << endl;
	long x;
	x = gcd(a,b);
	return (a*b)/x;
}
