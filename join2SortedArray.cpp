#include<bits/stdc++.h>

using namespace std;

void mergeArrays(int arr1[], int arr2[], int n, int m)
{
    map<int, bool> mp;
    int arr[100];
    for(int i = 0; i < n; i++)
    	mp[arr1[i]] = true;
    	
    for(int i = 0;i < m;i++)
    	mp[arr2[i]] = true;

    int k = 0;
    for(auto i: mp){
        arr[k] = i.first;
        k++;
    }
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr1[] = {1, 5, 6, 7};
    int arr2[] = {2, 3, 4, 5};
    mergeArrays(arr1,arr2,4,4);
    return 0;
}
