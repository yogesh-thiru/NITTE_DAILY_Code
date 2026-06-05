#include<bits/stdc++.h>
using namespace std;

main(){
    vector<int>v= {1,1,4,4,4,4,4};
    int element = -1;
    int count = 0;
    for(int i=0; i<v.size() ; i++){
        if( count == 0 && element != v[i]){
            count = 1;
            element = v[i];
        }

        if( element == v[i]) count++;
        else count--;
    }

    cout<< element;
    // int n=nums.size();
    // sort(nums.begin(), nums.end());
    // return nums[n/2];
}

  