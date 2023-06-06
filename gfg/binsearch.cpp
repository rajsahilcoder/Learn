// { Driver Code Starts
//Initial template for C++

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
    int index = -1;
    int bs(int arr[],int low,int high,int k)
    {
        if(high>low && low>-1 && high>-1)
        {
            int mid = (high + low)/2;
            if(arr[mid] == k)
            {
                return mid;
            }
            else if(arr[mid]<k)
            {
                return bs(arr,mid+1,high,k);
            }
            else
            {
                return bs(arr,low,mid-1,k);
            }
        }
        else
        {
            return -1;
        }

    }
    int binarysearch(int arr[], int n, int k){
        // code here
        return bs(arr,0,n-1,k);
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        int found = ob.binarysearch(arr,N,key);
        cout<<found<<endl;

    }
}

  // } Driver Code Ends