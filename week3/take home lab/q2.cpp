#include <bits/stdc++.h>
using namespace std;




int powerCount(int n, int c){
    
    if(n==0) return 1;
    if(n<0) return 0;
    
    
    int n_new = n - pow(c,2);
    
    return powerCount(n_new,c+1);
    
    
    
}


int main(){
    
    int n;
    cin>>n;

    int val = powerCount(n,1);
    
    cout<<val;

    return 0;

}
