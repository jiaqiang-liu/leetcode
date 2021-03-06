// Author: JiaQiang Liu
// Date: 2018/4/24

#include<iostream>
using namespace std;

class Solution {
public:
	int reverse(int x) {
		int symbol = 1;
		if (x < 0) {
			x = abs(x);
			symbol = -1;
		}
		long long ret = 0; //avoid overflow
		while (x) {
			ret = ret*10 + x % 10;
			x /= 10;
		}
		ret *= symbol;
		return ret >= INT_MIN && ret <= INT_MAX ? ret : 0;
	}
};

int main()
{
    return 0;
}

