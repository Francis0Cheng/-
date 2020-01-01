//keyword 二分 复杂度O(logn)
#include<cstdio>
int binarySearch(int A[], int left, int right, int x)
{
    int mid;
    while(left<=right)
    {
        mid = (left+right)/2;
        if(A[mid] == x) return mid;
        else if(A[mid]>x)
        {
            right = mid -1;
        }else{
            left = mid + 1;
        }
    }
    return -1; // 查找失败 返回-1
}
int lower_bound(int A[], int left, int right, int x)
{
    int mid;
    while(left<right) // left == right 意味着找到唯一的位置
    {
        mid = (left+right)/2;
        if(A[mid]>=x)
        {
            right = mid;
        } else{
            left = mid + 1;
        }
    }
    return left;
}
int upper_bound(int A[], int left, int right, int x)
{
    int mid;
    while (left<right)
    {
        mid = (left+right)/2;
        if(A[mid]>x)
        {
           right = mid;
        }else{
            left = mid+1;  
        }
    }
    return left;
    
}
int main()
{
    const int n = 10;
    int A[n] = {1,3,4,6,6,6,10,11,12,15};
    printf("%d %d\n",upper_bound(A, 0, n-1, 6), binarySearch(A, 0, n-1, 9));
    return 0;
}