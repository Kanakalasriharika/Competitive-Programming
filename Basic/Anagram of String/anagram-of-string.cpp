//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes here
map<char,int>m;
for(int i=0;i<str1.length();i++){
    m[str1[i]]++;
}
for(int j=0;j<str2.length();j++){
    m[str2[j]]--;
}
int count =0;
for(auto itr = m.begin();itr!=m.end();++itr){
    count = count+abs(itr->second);
}
 return count;

}