#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//recursive function
int func(int x,int n, int c){
    if (pow(c,n)<x){
        return func(x,n,c+1)+func(x-pow(c,n),n,c+1);
    }
    else if(pow(c,n)==x){
        return 1;
    }
    else{
        return 0;
    }
}

int main() {
    int x;
    int n;
    int c=1;
    int res;
    cin>>x>>n;//input X and C vales
    func(x,n,c);
    res=func(x,n,c);
    cout<<res;
    
    return 0;
}
