//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        vector<int>v;
        map<int,int>mp;
        for(int j=0;j<n;j++){
            mp[arr[j]]++;
            
            if(mp[arr[j]]>1){
                v.push_back(arr[j]);
                break;
                
            }
        }
        
        int k=1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]==k)
            {
                k++;
            }
        }
        v.push_back(k);
       
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends