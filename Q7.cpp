//https://leetcode.com/problems/find-k-closest-elements/
 
 
#include <bits/stdc++.h>
using namespace std;

void findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>>mh;
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            mh.push({abs(arr[i]-x), arr[i]});
            if(mh.size()>k){
                mh.pop();
            }
        }
        while(mh.size()!=0){
            v.push_back(mh.top().second);
            mh.pop();
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        return;
    }

int main() {
    int k,x,n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter value for k and x respectively: ";
    cin>>k>>x;
    vector<int>v;
     cout<<"Enter "<<n<<" values: ";
    int i=0;
    while(i<n){
        int temp;
        i++;
        cin>>temp;
        v.push_back(temp);
    }

    findClosestElements(v, k, x);

    return 0;
}