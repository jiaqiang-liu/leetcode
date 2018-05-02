### [Sqrt(x)](https://leetcode.com/problems/sqrtx/description/)

#### 思路：
最重要还是注意二分查找的易错点。

- mid = lo+(hi-lo)/2 比 mid = (lo+hi)/2更安全，因为后者容易溢出
- 不要以lo==hi为终止条件，应该以lo>hi为终止条件

标准写法为：
```
int binarySearch(vector<int> nums,int target){
    int lo=0,hi = nums.size()-1;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(nums[mid]<target) lo = mid+1;
        if(nums[mid]>target) hi = mid-1;
        else return mid;
    }
    return lo;
}
```