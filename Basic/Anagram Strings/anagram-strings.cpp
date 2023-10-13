//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int areAnagram(string S1, string S2) {
        // code here
        int n1 = S1.length();
        int n2 = S2.length();
        priority_queue<char>p1;
        priority_queue<char>p2;
        if(n1!=n2){
            return 0;
        }
        for(char a:S1){
            p1.push(a);
        }
        for(char b:S2){
            p2.push(b);
        }
        while(!p1.empty()){
            if(p1.top()==p2.top()){
                p1.pop();
                p2.pop();
            }
            else{
                return 0;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S1, S2;
        cin >> S1;
        cin >> S2;
        Solution ob;
        cout << ob.areAnagram(S1, S2) << endl;
    }
    return 0;
}

// } Driver Code Ends