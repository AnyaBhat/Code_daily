// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string revStr(string S) {
        // code here
        int n;
        n=S.length()-1;
        string revS;
        for(int i=0;i<=n;i++)
        {
            char t=S[n-i];
            revS.push_back(t);
        }
        return revS;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.revStr(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends
