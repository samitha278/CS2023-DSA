#include <bits/stdc++.h>

using namespace std;


int superDigit(string n, int k) {
    
    //base case
    if(n.length()==1){
        return stoi(n);
    }
    
    //calculate value
    long long sum = 0;
    for(char ch : n){
        sum += (ch - '0');
    }
    
    sum *= k;
    
    //recursion case
    return superDigit(to_string(sum),1);
}



int main(){
    
    
    int n,k;
    cin>>n>>k;
    
    cout<<superDigit(to_string(n),k);
    
    
    
}
