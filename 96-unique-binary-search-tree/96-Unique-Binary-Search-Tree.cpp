// Author:JiaQiang Liu
// Date:2018/4/29

#include<iostream>
#include<vector>
using namespace std;

class Soluton {
public:
	int numTrees(int n) {
		if (n <= 2)
			return n;
		vector<int> count(n+1,0);
		count[0] = 1;
		count[1] = 1;
		count[2] = 2;
		return cal(count, n);
	}

	int cal(vector<int> &count, int n) {
		if (count[n] != 0)
			return count[n];

		for (int i = 1; i <= n; i++) {
			count[n] += cal(count, i - 1)*cal(count, n - i);
		}
		return count[n];
	}
};

int main()
{
    return 0;
}

