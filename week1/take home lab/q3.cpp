#include <bits/stdc++.h>
using namespace std;


void rotateLeft(vector<int> &a,int n,int d){
    
    for(int i = 0 ; i<d;i++){
        
        int temp = a[0];
        
        
        for(int j = 0; j<n-1 ; j++){
            
            a[j] = a[j+1];
            
        }
        
        a[n-1] = temp;
    }
    
    
}


int main(){
    
    int n,d;
    
    cin >> n;
    cin >> d;
    
    vector<int> a(n);
    
    for(int &ele : a){
        cin>>ele;
    }
    
    
    rotateLeft(a,n,d);
    
    for(int &ele : a){
        cout << ele ;
    }
    
    
} 
