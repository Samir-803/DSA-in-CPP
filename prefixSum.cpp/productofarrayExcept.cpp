#include<bits/stdc++.h>
using namespace std;

    vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> pre(n); 
    
    int p1 = 1;
    for(int i=0;i<n;i++){
        pre[i] = p1;
        p1 *= nums[i];
    }

    int p2 = 1;
    for(int i=n-1;i>=0;i--){
        pre[i] *= p2;
        p2 *= nums[i];
    }
    return pre;  
    }

    int main(){
        int n;
        cout<<"Enter the Size of Array : ";
        cin>>n;

        vector<int> nums(n);
        cout<<"Enter the Element of Array : ";
        for(int i=0;i<n;i++) cin>>nums[i];

        vector<int> ans(n);
        ans =  productExceptSelf(nums);
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    }