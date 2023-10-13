//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	int countSubstringWithEqualEnds(string s)
	{
	    // Your code goes here
	   // int n = s.length();
	   // int count =0;
	   // for(int i=0;i<n;i++){
	   //     for(int j=i+1;j<n;j++){
	   //         if(s[i]==s[j])
	   //         {
	   //             count++;
	                
	   //         }
	   //         else{
	   //             continue;
	   //         }
	   //     }
	   // }
	   // int a = n+count;
	   // return a;
	   
	   unordered_map<char,int>m;
	   int count =0;
	   for(int i=0;i<s.size();i++){
	       m[s[i]]++;
	       count = count+m[s[i]];
	   }
	   return count;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;

   	    Solution ob;

   		cout << ob.countSubstringWithEqualEnds(str) << "\n";
   	}

    return 0;
}
// } Driver Code Ends