#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n){
    
    vector<pair<int,int>> sum;
    sort(arr.begin(),arr.end());
        int s=0;
    int e=n-1;
    while(s<e){
     
        if(arr[s]+arr[e]<target){ // 2 7 11 13 target = 16
            s++;                      
        }else if(arr[s]+arr[e]>target){ // 2 7 11 13 target = 9
            e--;
        }else{   // 1 -1 -1 2 2 target 1
            sum.push_back({arr[s],arr[e]});
            s++;
            e--;
        }
    }
    if(sum.size()==0) {
        sum.push_back({-1,-1});
    }
        return sum;   
}    

