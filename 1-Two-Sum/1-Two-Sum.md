### [Two-Sum](https://leetcode.com/problems/two-sum/)

#### 思路1

两遍循环，复杂度O(n^2)
    
#### 思路2

使用unordered_map，一遍循环记录数字出现的位置，第二遍循环查找target-num是否存在，若存在则返回下标。由于unordered_map的实现是hash table,查找的复杂度是O(1),所以算法的整体复杂度为O(n)

#### 学习收获
###### unordered_map和map的比较

|     | unordered_map | map
----- | ------------- | ---
内部实现原理|哈希表   |红黑树
优点 | 查找速度非常快O(1)|元素有序，很多操作在O(lgn)下即可实现
缺点 | 哈希表的简历比较耗费时间 | 空间占用率高

###### [why size_t matters](http://jeremybai.github.io/blog/2014/09/10/size-t)


