### [Group Anagrams](https://leetcode.com/problems/group-anagrams/description/)
#### 思路：
运用multimap<string,string>，first位置放置字符串排序后的结果，second位置放置原字符串，因为multimap自身的有序性，加之一次遍历即可