//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        stack <string> v;
        string a= "";
        S=S+'.';
        //string k =".";
       
        for(int i =0;i<S.length();i++){
        if(S[i]!='.'){
            a = a+S[i];
        }
        else{
          v.push(a);
          a ="";
        }}
        
        string rev="";
        while(!v.empty()){
            rev = rev+v.top();
            rev = rev+'.';
             v.pop();
            
        }
        rev.pop_back();
        return rev;
        
        
        
    } 
};


//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends