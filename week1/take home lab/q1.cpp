#include <iostream>
#include <vector>
using namespace std;


vector<int> reverseArray(vector<int> a , int size ){
    
    int n = size / 2 ; 
   
    for(int i = 0 ;  i < n ; n++){
        
        int temp = a[i];
        a[i] = a[size-1-i];
        a[size-1-i] = temp;
    }
    
    return a;
}


int main(){
    
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    
    for(int &ele : a){
        cin>>ele;
    }
    
    vector<int> arr = reverseArray(a,n);
    
    for(int ele : arr){
        cout<<ele;
    }
    
    return 0;
    
    
}
