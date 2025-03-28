//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++
class Solution {
  public:
    int sumOfDivisors(int n) {
        int store=0;
            for(int i  =1; i<=n; i++){
                for(int j =1; j<=n; j++){
                    if(i<j) break;
                    else if(i%j==0){
                        store =+ store + j;
                    }
                }
            }
        return store;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        int ans = ob.sumOfDivisors(N);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends