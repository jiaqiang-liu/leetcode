// Arthor: Jiaqiang Liu
// Date: 2018/4/23

#include<iostream>
#include<limits.h>
using namespace std;

class Solution {
public:
	double pow(double x, int n) {
		if (x == 1 || n == 0)
			return 1;
		if (x == 0)
			return 0;
		double ret = 1.0;
		bool symbol = false;
		unsigned int exp = n;//avoid overflow
		if (n < 0) {
			exp = -n;
			n = abs(n);
			symbol = true;
		}
		while (exp) {
			if (exp & 1) {
				ret *= x;
			}
			x *= x;
			exp >>= 1;
		}
		return symbol ? 1.0 / ret : ret;
	}
};

int main()
{
    return 0;
}

