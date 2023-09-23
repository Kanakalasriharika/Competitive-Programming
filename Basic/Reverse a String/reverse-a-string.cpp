//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string str)
    {
        // // Your code goes here
        // stack<char> s;
        // for(int i=0;i<str.length();i++){
            
        //     s.push(str[i]);
        // }
        // string v ="";
        // while(!s.empty()){
        //     v = v+ s.top();
        //     s.pop();
    
            
        // }
        // return v;
        
        int n = str.length();
        int m =0;
        if(n%2==0){
            m = n/2;
            
        }
        else
           m = (n+1)/2;
         
        for(int i =0;i<m;i++){
            char c = str[n-1-i];
            str[n-1-i]= str[i];
            str[i]= c;
        }
        return str;
        
        
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends