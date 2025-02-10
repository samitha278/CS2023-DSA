#include <iostream>
using namespace std;


void insertion2(int* a,int size){
    
    
    for(int i = 1;i<size; i++){
        
        int hole = i;
        int value = a[i];
        
        while(hole>0 && value<a[hole-1]){
            a[hole] = a[hole-1];
            hole--;
        }
        a[hole] = value;
    }
    
    
}

int main(){
    
    int arr[] = {7,2,4,1,5,3,6};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    insertion2(arr,size);
    
    for(int num : arr){
        cout<< num << " ";
    }
    
    return 0;
    
}
