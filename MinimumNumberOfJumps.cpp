//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        if(n==1)
            return 0;
        int steps=1;
        int currentMaxReachable=arr[0];
        int maxReachable=arr[0];
        for(int i=0;i<=maxReachable;i++){
            if(i==n-1)
                return steps;
            currentMaxReachable=max(currentMaxReachable,i+arr[i]);
            if(i==maxReachable){
                if(currentMaxReachable<=i)
                    return -1;
                maxReachable=currentMaxReachable;
                steps++;
            }
        }
        return -1;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends
