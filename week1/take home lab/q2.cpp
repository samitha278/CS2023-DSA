#include <bits/stdc++.h>
using namespace std;



int maxHourglass(vector<vector<int>> a ,int n){
    
    vector<int> total;
    
    for(int i = 0 ; i + 2 < n ; i++){
        
        for(int j = 0 ; j+2 < n ; j++){
            
            int val = a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            
            total.push_back(val);
            
        }
    }
    
    
    return *max_element(total.begin(),total.end());
    
    
    
}


int main(){
    
    int m , n;
    m = n = 6;
    
    vector<vector<int>> mat(m, vector<int>(n));
    
    for(int i = 0 ; i<m; i++){
        for(int j = 0 ; j<n ; j++){
            cin >> mat[i][j];
        }
    }
    
    for(int i = 0 ; i<m; i++){
        for(int j = 0 ; j<n ; j++){
            cout << mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    cout << maxHourglass(mat , n);
    
    
    return 0;
}
