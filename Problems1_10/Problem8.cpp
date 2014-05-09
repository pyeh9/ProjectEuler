#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	vector<int>number;
	string line;
	stringstream liness;
	while(getline(cin, line)){
		cin.clear();
		if(line == "") break;
		//cout << "line read in was:" << line << endl;
		for(int i = 0; i < line.length(); i++){
			number.push_back(line.at(i) - '0');
		}
	}
	int first, second, third, fourth, fifth;
	int max = 0;
	int temp = 0;
	for(int i = 0; i < number.size()-4; i++){
		first = number[i];
		second = number[i+1];
		third = number[i+2];
		fourth = number[i+3];
		fifth = number[i+4];
		if(first==0||second==0||third==0||fourth==0||fifth==0){
			continue;
		} else {
			temp = first*second*third*fourth*fifth;
			if(temp > max) max = temp;
		}
	}
	cout << max << endl;
	return 0;
}
