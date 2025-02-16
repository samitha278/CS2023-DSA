
#include <bits/stdc++.h>
using namespace std;


int powerSum(double x,double n){
    
    double k = pow(x,1.0/n);
    
    int paths = 0;
    
    
    int func(int bal,int pre ){
        
        if(bal == 0){
            return 0;
        }
        if(pre==1){
            return 1;
        }
        
        return func()
        
           
    }
    
    
    
    for(int i = k ; i > 0 ; i--){
        
        int bal = x - pow(i,n);
        
        int val = func(bal,i);
        
        if(val==0){
            paths++;
        }
        
    }
   
   
    
}

int main()
{
    double x,n;
    cin>>x>>n;
    
    cout << powerSum(x,n);

    return 0;
}
