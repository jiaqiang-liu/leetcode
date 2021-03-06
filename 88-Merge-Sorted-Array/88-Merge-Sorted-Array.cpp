// Author:JiaQiang Liu
// Date: 2018/5/2

#include<iostream>
using namespace std;

void merge(int A[], int m, int B[], int n) {
	int ia = m - 1;
	int ib = n - 1;
	int i = m + n - 1;
	for (int i = m + n - 1; i >= 0; i--) {

		if (ia >= 0 && ib<0) {
			break;
		}
		if (ia<0 && ib >= 0) {
			A[i] = B[ib--];
			continue;
		}
		if (ia >= 0 && ib >= 0) {
			if (A[ia] > B[ib]) {
				A[i] = A[ia--];
			}
			else {
				A[i] = B[ib--];
			}
		}

	}
}

int main()
{
    return 0;
}

