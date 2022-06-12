// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        // code here
        int k=0,k1=0, temp=N,rev=0;
        while(temp!=0)
        {
            k1=temp%10;
            temp=temp/10;
            k=k1+k;
        }
        int k2=k;
        while(k2!=0)
        {
            k1=k2%10;
            k2=k2/10;
            rev=rev*10+k1;
        }
        if(rev==k)
           return 1;
        else
           return 0;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}
  // } Driver Code Ends
