#include <bits/stdc++.h>
using namespace std;
void threeWayPartitioning(vector<int>& arr,int a,int b){
  // Linear time
  int l = 0;
  int r = arr.size()-1;
  for (int i = 0; i <= r; i++)
  {
    if(arr[i]<a){
      swap(arr[i],arr[l]);
      l++;
    }else if(arr[i]>b){
      swap(arr[i],arr[r])
      r--;
      i--;
    }
  }
  
}