// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string conRevstr(string S1, string S2) {
        // code here
        string rev,cat;
        for(int i=0;i<S1.length();i++)
            cat.push_back(S1[i]);
        for(int i=0;i<S2.length();i++)
            cat.push_back(S2[i]);
        int len=cat.length();
        for(int i=len-1;i>-1;i--)
        {
            rev.push_back(cat[i]);
        }
        return rev;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1;
        cin >> S2;
        Solution ob;
        cout << ob.conRevstr(S1, S2) << endl;
    }
    return 0;
}
  // } Driver Code Ends
