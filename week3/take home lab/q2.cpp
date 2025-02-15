
#include <bits/stdc++.h>
using namespace std;


int powerSum(double x,double n){
    
    double k = pow(x,1.0/n);
    
    return k;
    
    
}




int main()
{
    
    int x,n;
    cin>>x>>n;
    
    cout << powerSum(x,n);
    
    return 0;
}
