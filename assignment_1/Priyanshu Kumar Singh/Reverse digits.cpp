//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
			long long int reverse_digit(long long int n)
		{
		    // Code here
		     long revD = 0;
           
           while(n>0){
               revD = revD * 10 + n %10;
               n = n/10;
           }
           return revD;
		    
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.reverse_digit(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends