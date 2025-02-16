//Selection sort algorithm

#include <bits/stdc++.h>
using namespace std;


void selectionSort(vector<int> &a , int n){
    
    
    
    for(int j =0 ; j<n ; j++){
        
        int min = a[j];
        int pos = j;
        
        for(int i= j+1 ; i < n ; i++){  
                   
            if(min>a[i]){
                min = a[i];
                pos = i;
            }
            
        }
        
        swap(a[j],a[pos]);
        
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
