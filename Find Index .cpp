// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        //code here.
        vector<int> ind;
        int count1=0,count2=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==key){
               if (count1==0)
                   ind.push_back(i);
                   count1+=1;
            }
        }
        for(int j=n-1;j>=0;j--)
        {
             if(a[j]==key){
              if (count2==0)
                 ind.push_back(j);
                 count2+=1;
            }
        }
        if(ind.size()==0)
        {
            ind.push_back(-1);
            ind.push_back(-1);
        }
        return ind;
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
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}
  // } Driver Code Ends
