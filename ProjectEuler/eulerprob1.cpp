#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main () {
	int i1 = 1, i2 = 2, count = 0, total = 0;
	string test;
	
	while( count < 4000000)
	{
		if( i1 % 2 == 0)
		{
			total += i1;
		}
		count = i1 + i2;
		i1 = i2;
		i2 = count;
	}
	if(i1 % 2 == 0)
		total += i1;
	cout << total;
	cin >> test;

return 0 ; 
}
