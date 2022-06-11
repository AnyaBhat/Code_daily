// { Driver Code Starts
#include<stdio.h>
void printPat(int n);

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int n;
	scanf("%d",&n);
    printPat(n);
    printf("\n");
	}
}// } Driver Code Ends


/*You are required to complete this method*/
void printPat(int n)
{
//Your code here
int i,j,k,m=n;
for (i=0;i<n;i++)
{
    for(j=n;j>0;j--)
    {
        for(k=m;k>0;k--)
        {
            printf("%d ",j);
        }
    }
    m--;
    printf("$");
}
}
