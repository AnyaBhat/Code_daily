// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	int k1,k2,cn=0,rev;
    	for(int i=0;i<n;i++)
    	{
    	    k2=a[i],k1=0,rev=0;
    	    while(k2!=0)
            {
                k1=k2%10;
                k2=k2/10;
                rev=rev*10+k1;
            }
            if(rev==a[i])
               cn++;
    	}
    	if (cn==n)
    	    return 1;
    	else 
    	    return 0;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends
