#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subset(vector<int> nums){
    vector<vector<int>> ans;
    int n = nums.size();
    int ss = 1 << n;
    for(int i=0;i<ss;i++){
        vector<int> v;
        for(int j=0;j<n;j++){
            if(i&(1<<j)) v.push_back(nums[j]);
        }
        ans.push_back(v);
    }
    return ans;
    // TC = O(n*2^n)
    // SC = O(n*2^n)
}

int main(){
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res = subset(nums);
    for(auto it : res){
        for(auto ele : it) cout << ele << " ";
        cout << endl;
    }
}