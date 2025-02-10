#include <iostream>
#include <vector>
using namespace std;



void insertionSort1(vector<int> &a ,int size){
    
    
    int value = a[size-1];
    
    int hole = size-1;
    
    while(hole>0 && value<a[hole-1]){
        
        a[hole] = a[hole-1];
        hole--;
        
        for(int &ele : a){
            cout << ele << " ";
        }
        cout<<endl;
    }
    
    a[hole] = value;
    
}


int main(){
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    
    for(int &ele : a){
        cin >> ele;
    }
    
    
    insertionSort1(a,n);
    
    for(int &ele : a){
            cout << ele << " ";
        }
        
    return  0;
}
