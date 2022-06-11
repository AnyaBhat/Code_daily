// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void printNos(int N)
{
    //Your code here
    if(N==0)
       return;
    printNos(N-1);
    printf("%d ",N);
}

// { Driver Code Starts.
/* Driver program to test printNos */
int main()
{
    int T;
    
    //taking testcases
    scanf("%d", &T);
    
    while(T--)
    {
        int N;
        
        //input N
        scanf("%d", &N);
        //calling printNos() function
        printNos(N);
        printf("\n");
    }
    return 0;
}
  // } Driver Code Ends
