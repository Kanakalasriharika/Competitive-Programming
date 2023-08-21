//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	   // priority_queue<int> pq;
	   // for (int i=0 ;i<n;i++){
	   //     pq.push(arr[i]);
	   // }
	   // int temp =pq.top();
	   // pq.pop();
	   //  while (pq.top()==temp){
	   //      pq.pop();
	   //  }
	   // return pq.top();
	   int temp=arr[0];
	   for(int i =0;i<n;i++){
	       if(arr[i]>temp){
	           temp =arr[i];
	       }
	   }
	   
	   int second =-1;
	    for(int i =0;i<n;i++){
	        if(arr[i]>second&&arr[i]<temp){
	            second = arr[i];
	        }
	    }
	    return second;
	}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends