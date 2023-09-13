//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        // Your code here
        priority_queue<char> p;
        priority_queue<char> p1;
        
         for (char c : a) {
          p.push(c);
         }
        for (char d : b) {
          p1.push(d);
         }
        
        int l=p.size();
        int l1 = p1.size();
        if (l!=l1){
            return 0;
        }
        else
           while(!p.empty()){
               if(p.top()==p1.top()){
                   p.pop();
                   p1.pop();
               }
               else 
                  return 0;
           }
           return 1;
           
           
        
        
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends