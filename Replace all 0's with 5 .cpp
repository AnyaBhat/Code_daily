// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

 // } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
    int temp=n,num=0,mult=1;
    while(temp>0)
    {
        int k=temp%10;
        temp=temp/10;
        if(k==0)
        {
            k=5;
        }
        num+=(mult*k);
        mult*=10;
    }
    return num;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}  // } Driver Code Ends
