#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




// void setZero(vector<vector<int>& matrix){
// int row = matrix[0].size();
// int col = matrix.size();

// bool firstrow = false;
// bool firstcol = false;

// for(int c = 0;c < col;c++){
// if(matrix[0][c] == 0){
//     firstrow = true;
//     break;
// }
// }

// for(int r = 0;r < row;r++){
// if(matrix[r][0] == 0){
//     firstcol = true;
//     break;
// }
// }

// ...




// }


// int main(){
    // int n = 3;
    // vector<vector<int>> matrix = {{1,2,3} ,{4,5,6} , {7,8,9}};
    // vector<vector<int>> trans = matrix;
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j < n ;j++){
    //         trans[j][i] = matrix[i][j];

    //     }
    // }
    // for(int i = 0 ; i < n ;i++){
    //     for(int j = 0 ;j < n ;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<endl;
    // for(int i = 0 ; i < n ;i++){
    //     for(int j = 0 ;j < n ;j++){
    //         cout<<trans[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    


  constexpr
    int sum(int a,int b){
      int summ = a+b;
        if(summ == 10) return summ;
        else{
            sum(a+1,summ);
        }
        return summ;
    }
    int main(){

        int a{2};
        int b{1};

        cout<<sum(a,b)<<endl;
    }