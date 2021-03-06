// Author:JiaQiang Liu
// Date:2018/4/28

#include "stdafx.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
	string simplifyPath(string path) {
		vector<string> v;
		string next = "root";
		v.push_back(next);
		next = "";
		for (int i = 1; i < path.length(); i++) {
			if (path[i] != '/') {
				next += path[i];
			}
			else{
				if (next == "..") {
					if (v.back() != "root") {
						v.pop_back();
					}
				}
				else if(next!="."&&next!=""){
					v.push_back(next);
				}
				next = "";
			}
		}
		if (next != "") {
			if (next == "..") {
				if (v.back() != "root") {
					v.pop_back();
				}
			}
			else if (next != ".") {
				v.push_back(next);
			}
		}
		next = "/";
		for (int i = 1; i < v.size(); i++) {
			next += v[i];
			if (i != v.size() - 1)
				next += '/';
		}
		return next;

	}
};

int main()
{
	string str = "/...";
	Solution s;
	cout << s.simplifyPath(str) << endl;;
    return 0;
}

