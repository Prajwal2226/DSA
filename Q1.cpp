#include<iostream>
#include<vector>
using namespace std;
// check for prefix sum = suffix sum such that parition into two arrays
//Given an array of integers nums, calculate the pivot index of this array.
//https://leetcode.com/problems/find-pivot-index/description/

void checkPrefixSuffixSum(vector<int> &v){
    int total_sum= 0;
    for(int i=0;i<v.size();i++){
        total_sum+=v[i];
    }
    int prefix_sum=0,pos= 0;
    for(int i=0;i<v.size();i++){
        prefix_sum+=v[i];
        pos=i;
        int suffix_sum=total_sum-prefix_sum;
        
        if (suffix_sum == total_sum-prefix_sum){
            cout<<" " <<pos<<" "<<endl;
            return;
        }
        
    }
    return ;
}
 int main(){
    int n;
    cin>>n;

    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    checkPrefixSuffixSum(v);
    return 0;
 }