//{ Driver Code hdjdhkStarts this
#include<bits/stdc++.h>
using namespace std;
 
// Driver program to test above function

// } Driver Code Ends
class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
       int sum=0;int c=0;
       
       while(n>0){
           int last=n%10;
           if(last==0) 
               sum+=pow(10,c++)*5;
               else sum+=pow(10,c++)*last;
               n/=10;
           
           
       }
       return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	Solution obj;
    	cout<<obj.convertFive(n)<<endl;
    }
}
// } Driver Code Ends