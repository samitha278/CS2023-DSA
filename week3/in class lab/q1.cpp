//mergeSort

#include <bits/stdc++.h>
using namespace std;



void merge(vector<int> &l , vector<int> &r , vector<int> &a){
    
    int i,j,k;
    i=j=k=0;
    
    int len_l = l.size();
    int len_r = r.size();
    int len_a = a.size();
    
    while(i<len_l && j<len_r){
        if(l[i]<=r[j]){
            a[k] = l[i];
            i++;
        }else{
            a[k] = r[j];
            j++;
        }
        k++;
    } 
    
    while(i<len_l){
        a[k] = l[i];
        i++;
        k++;
    }
    while(j<len_r){
        a[k] = r[j];
        j++;
        k++;
    }
    
    
}


vector<int> mergeSort(vector<int> a , int n){


    if(n==1){
        return a;
    }
    
    int temp = 0;
    if(n%2==0){
        temp = n/2;
    }else{
        temp = (n-1)/2;
    }
    
    
    vector<int> l(a.begin(),a.begin()+temp);
    vector<int> r(a.begin()+temp,a.begin()+n);
    vector<int> l_new = mergeSort(l,l.size());
    vector<int> r_new = mergeSort(r,r.size());
    
    
    merge(l_new,r_new,a);
    
    return a;
    
    
}





int main(){
    
    int n;
    cin>>n;
    
    vector<int> a(n);
    
    for(int &ele : a){
        cin >> ele;
    }
    
    
    vector<int> a_new = mergeSort(a,n);
    
    for(const int &ele : a_new ){
        cout << ele << " ";
    }
    
    return 0;
    
}
