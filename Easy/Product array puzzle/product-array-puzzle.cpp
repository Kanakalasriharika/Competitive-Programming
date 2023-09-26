//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //code here    
        long long int temp=1;
        long long int product =1;
        long long int num =0;
        int count=0;
        for(const auto& val:nums){
            product = product*val;
            if(val!=0)
             { 
                 temp = temp*val;
             }
             else
             {
                 count++;
             }
        }
        vector<long long int>result;
        for(const auto& val:nums){
            if(val ==0){
                if(count>1)
                {
                    result.push_back(0);
                }
                else
                {
                    result.push_back(temp);
                }
                continue;
            }
            num = product/(val);
            result.push_back(num);
        }
        return result;
    }
};


//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends