#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    int n = v.size();
    int m = v[0].size();

    for(int i=0; i<n; i++){
        for(int j=i+1; j<m; j++){
            swap(v[i][j], v[j][i]);
        }
    }

    for(int i=0; i<n; i++){
        reverse(v[i].begin(), v[i].end());
        for(int j=0; j<m; j++){
            cout << v[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}


1 2 3 
4 5 6
7 8 9

1 4 7
2 5 8
3 6 9

