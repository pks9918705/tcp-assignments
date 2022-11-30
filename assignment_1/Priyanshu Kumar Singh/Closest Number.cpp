//hi{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int closestNumber(int N , int M) {
        // code here
        
        bool right=true;
        int R=0;
        int temp=N;
        
        
        while(right){
            if(temp%M==0  ){
                right=false;
                R=temp;
            }else
            temp++;
        }
        
        bool left=true;
        int L=0;
        temp=N;
        
        
        while(left){
            if(temp%M==0  ){
                left=false;
                L=temp;
            }else
            temp--;
        }
        
        if(abs(N-L)>abs(N-R)){
            return R;
        }else if(abs(N-L)<abs(N-R))
        return L;
        else{
            if(abs(L)>abs(R))
            {
            return L;
             }else
        return R;
            
        }
        
        
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,M;
        
        cin>>N>>M;

        Solution ob;
        cout << ob.closestNumber(N,M) << endl;
    }
    return 0;
}
// } Driver Code Ends