#include <iostream>
using namespace std;

void printInReverse(int n){

    while(n>0){
        int last=n%10;
        cout<<last;
        n=n/10;
    }
    return ;
}

int main(){

cout<<"enter the number"<<endl;
int n; cin>>n;

printInReverse(n);

return 0;

}