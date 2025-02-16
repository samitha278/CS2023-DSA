//Optimized Bubble sort algorithm

#include <bits/stdc++.h>
using namespace std;


void bubbleSort(vector<int> &a , int n){
    
    
    
    for(int j =0 ; j<n-1 ; j++){
        
        bool swapped = false;
        
        for(int i= 0 ; i < n-1-j ; i++){
            
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
                swapped = true;
            }
            
        }
        
        if(!swapped) break;
    }    
    
}


int main(){
    
    int n;
    cin >> n;
    
    
    vector<int> a(n);
    
    for(int &ele : a){
        cin >> ele;
    }
    
    bubbleSort(a,n);
    
    for(const int &ele : a){
        cout << ele <<" ";
    }
    
    
    
}
