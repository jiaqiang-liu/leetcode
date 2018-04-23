### [Longest-Substring-without-repeating-charaters](https://leetcode.com/problems/longest-substring-without-repeating-characters/description/)

#### 思路：
定义两个指针i和j,初始时都指向字符串头部，使用map记录字符出现的下标，j每次向后移动一位，如果j当前指向的字符在之前出现过，分为两种情况：
1. 在i之前，则i不变，将字符的位置更新即可
2. 在i之后，将i移到字符的位置的下一个

i和j之间的距离即是当前字符往前最大的不重复子串距离，在遍历过程中，比较记录最大的不重复子串长度即可

