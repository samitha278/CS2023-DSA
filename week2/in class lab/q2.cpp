//Bubble Sort Algorithm


#include <bits/stdc++.h>
using namespace std;


void bubbleSort(vector<int> &a , int n){
    
    for(int j =0 ; j<n ; j++){
        
        for(int i= 0 ; i < n-1 ; i++){
            
            if(a[i]>a[i+1]){
                int temp = a[i];
                a[i]=a[i+1];
                a[i+1] = temp;
            }
            
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
    
    bubbleSort(a,n);
    
    for(int &ele : a){
        cout << ele <<" ";
    }
    
    
    
}
