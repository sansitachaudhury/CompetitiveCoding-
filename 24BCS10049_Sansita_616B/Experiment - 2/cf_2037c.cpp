#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int i=0;i<t;i++) {
        int n;
        cin>>n;
        if(n<=5){
            cout<<-1<<endl;
        } 
        else{
            int l=1;
            int r=n;

            while(l<r){
                cout<<l<<" "<<r<<" ";
                l++;
                r--;
            }
            if (l==r) {
                cout<<l;
            }
            cout<<endl;
        }
    }
    return 0;
}
