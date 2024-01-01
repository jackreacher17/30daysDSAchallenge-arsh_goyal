//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    // your task is to complete this function
    
    //Code here
  int maxDistance(int arr[], int n)
{
    int maxi = 0;
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        // if element is not found
        if (mpp.find(arr[i]) == mpp.end())
        {
            mpp[arr[i]] = i;
        }
        maxi = max(maxi, i - mpp[arr[i]]);
    }
    return maxi;
}
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.maxDistance(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends