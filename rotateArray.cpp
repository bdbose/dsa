// Given an array, rotate the array to the right by k steps, where k is non-negative.
// https://leetcode.com/problems/rotate-array/

#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int arr[]= {11,2,4,5};
	
	vector<int> nums (arr, arr + sizeof(arr) / sizeof(arr[0]) );
 	int last,i;
 	int n=nums.size();
 	for(int m=0;m<=2;m++){
 		last = nums[n-1];
 		for(i=n-2;i>=0;i--){
 			nums[i+1]=nums[i];
		 }
		nums[0]=last;
	 }
 	
 	for(i=0;i<n;i++){
 		cout<<nums[i]<<',';
	 }
 	
    return 0;
}