//Selection Sort

#include <bits/stdc++.h>
using namespace std;


void selectionSort(vector<int> &a , int n){
    
    
    
    for(int j =0 ; j<n-1 ; j++){
        
        int pos = j;
        
        for(int i= j+1 ; i < n ; i++){  
                   
            if(a[pos]>a[i]){
                pos = i;
            }
            
        }
        
        if(pos!=j){
            swap(a[j],a[pos]);
        }
    }  
    
    
    
    
}


int main(){
    
    int n;
    cin >> n;
    
    
    vector<int> a(n);
    
    for(int &ele : a){
        cin >> ele;
    }
    
    selectionSort(a,n);
    
    for(int &ele : a){
        cout << ele <<" ";
    }
    
    
    
}
