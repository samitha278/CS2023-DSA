#include <iostream>
using namespace std;



void insertion(int* a , int size ){
    
    for(int i=0;i<size-1;i++){
    
        
        int temp = a[i+1];
        
        int k = 0;
        
        
        for(int j = 0; j<i+1 ; j++){
            if(a[j]>temp){
                k = j;
                break;
            }
        }
        
        for(int j = i+1 ; j>k;j--){   
            a[j]=a[j-1];
        }
        
        a[k] = temp;
        
    
    }
    
}

int main(){
    
    int arr[] = {7,2,4,1,5,3,6};
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    insertion(arr,size);
    
    for(int num : arr){
        cout<< num << " ";
    }
    
    return 0;
    
}
