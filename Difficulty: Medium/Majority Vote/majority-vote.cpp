//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& nums) {
        // Your code goes here.
                unordered_map<int ,int>m;
        for(auto &i:nums)
            m[i]++;
        vector<int>ans;
        int n=nums.size();
        for(auto &i:m)
            if(i.second>n/3)
                ans.emplace_back(i.first);
        sort(ans.begin(),ans.end());
        if(ans.size()==0)
            ans.emplace_back(-1);
        return ans; 
        // unordered_map<int,int>freq
        
        // for(int &e : nums){
        //     freq[e]++;
        // }
        
        // int one_third=nums.size()/3;
        
        // vector<int>res;
        
        // for(auto &pair : freq){
            
        //     if(pair.second > one_third)
        //       res.push_back(pair.first);
        // }
        // return res;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<int> ans = ob.findMajority(nums);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends