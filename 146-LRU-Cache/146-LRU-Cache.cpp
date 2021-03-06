// Author:JiaQiang Liu
// Date: 2018/4/27

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class LRUCache {
public:
	LRUCache(int capacity) {
		m_capacity = capacity;
	}

	int get(int key) {
		auto find = keys.find(key);
		if (find != keys.end()) {
			auto iter = find->second;
			int result = iter->first;
			values.push_front(*iter);
			values.erase(iter);
			keys[key] = values.begin();
			return result;
		}
		else {
			return -1;
		}
			
	}

	void put(int key, int value) {
		auto find = keys.find(key);
		if (find == keys.end()) {
			if (keys.size() >= m_capacity) {
				keys.erase(values.back().second);
				values.pop_back();
			}
		}
		else {
			auto iter = find->second;
			values.erase(iter);
		}
		values.push_front(make_pair(value, key));
		keys[key] = values.begin();
	}

private:
	int m_capacity;
	typedef list<pair<int, int>> list_type;
	unordered_map<int, list_type::iterator> keys;
	list_type values;
};

int main()
{
    return 0;
}

