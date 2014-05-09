#include <iostream>

using namespace std;

int main()
{
	long sumofsqr = 0;
	long sqrofsum = 0;

	for(int i = 1; i <= 100; i++)
	{
		sumofsqr += i*i;
		sqrofsum += i;
	}
	sqrofsum=sqrofsum*sqrofsum;

	cout << sqrofsum - sumofsqr << endl;
	return 0;
}	
