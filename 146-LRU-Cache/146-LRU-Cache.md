### [LRU Cache](https://leetcode.com/problems/lru-cache/description/)

#### 思路

为了达到get和set的操作都是常数时间复杂度的，这里要用到的数据结构是，list和unordered_map

在起初，我naive的用unordered_map<int,int>存储<key,value>值，使用list<int>存储元素的优先级，操作如下：

##### get操作
```
如果在unordered_map中没有查找到key，则返回-1，否则返回value值
并且，将key这个元素移动到list的首部(list的尾部代表最久未使用的元素)
```

##### set操作
```
如果在unordered_map中已经存在了key值，则修改它的value值
否则，如果容量未满，则插入<key,value>,并将key值插入到list的首部
如果容量已经满了，则删除list末尾的元素，将key值插入到list的首部，最后插入<key,value>
```

大体的方向是没有错误的，不过仔细发现，在get操作中，要将当前元素移到首部，因为list不支持下标查找，所以这个操作是需要O(n)的，于是无法达到理想的要求


##### 修改如下
新增一个数据结构:
> typedef list<pair<int,int>> list_type

用list_type来存<key,value>

用unorder_map<int,list_type::iterator> 来存储key和对应的位置(相当于指针)

这样的话，通过key，就可以查找到位置，然后就可以查找的value,这样所有的操作就可以在常数时间内完成。

具体实现见代码