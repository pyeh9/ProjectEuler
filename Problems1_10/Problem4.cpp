#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <cstdlib>
#include <sstream>
#include <cmath>
using namespace std;

bool isPalindrome(string);

int main()
{
	string n;
	stringstream ns;
	double temp;
	for(int i = 1000000; i >= 10000; i--){
		ns.str("");
		ns << i;
		//cout << ns.str() << endl;
		if(isPalindrome(ns.str())){
			//cout << i << endl;
			for(int k = 100; k < ceil(sqrt(i)); k++){
				if(i % k == 0){
					temp = i/k;
					cout << "i/k = " << i << "/" << k << " = " << temp << endl;
					if((temp >= 100 && temp <= 999)&&(k>=100 && k<=999)){
						cout << i;
						return 0;
					}		
				}
			}
		}
	}
	return 0;	
}

bool isPalindrome(string n)
{
	if(n.length() == 1) return true;
	else if(n.length() == 2) return (n[0]==n[1]);
	else if(n[0] == n[n.length()-1]){
		return isPalindrome(n.substr(1,n.length()-2));
	}	else return false;
} 
