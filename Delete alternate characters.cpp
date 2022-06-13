// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string delAlternate(string S) {
        // code here
        int len=S.length();
        string alt;
        for(int i=0;i<len;i++)
        {
            if(i%2==0)
               alt.push_back(S[i]);
        }
        return alt;
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
        cout << ob.delAlternate(S) << endl;
    }
    return 0;
}
  // } Driver Code Ends
