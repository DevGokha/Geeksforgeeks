//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long > v;
         long long fac =1;
         for(long long i =1; i<=n; i++){
             fac = fac*i;
             v.push_back(fac);
             if(v[i-1]>n){
                 v.pop_back();
                 break;
             }
         }
         return v;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends