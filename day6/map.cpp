#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// int main(){

// unordered_map<int,string>mpp;
//  mpp.insert({0, "apple"});
//  mpp.insert({1,"mango"});
//  mpp.insert({2,"watermelon"});
//  mpp.erase(0);
//  mpp

//  for(auto m : mpp){
//     cout<<m.first<<m.second<<endl;
//  }

//     return 7;
// }


int longestConsigivite(vector<int>& arr)
{
    int n=arr.size();
    if(n==0) return 0;
    /*sort(arr.begin(),arr.end());
    int maxl=0,curl=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[i-1]+1)
        {
            curl++;
        }
        else if(arr[i]!=arr[i-1])
        {
            maxl=max(maxl,curl);
            curl=1;
        }

    }
    maxl=max(maxl,curl);
    return maxl;*/

    unordered_set<int> st;
 int maxi = 0, contig = 0, maxContig = 0;
    for(int i=0; i<n; i++)
    {
        maxi = max(maxi, arr[i]);
        st.insert(arr[i]);

    }

    for(int i=0; i<maxi; i++)
    {
        if(st.find(i) != st.end())
        {
            contig++;
            maxContig = max(contig, maxContig);
        } 
        else
        {
            contig = 0;
        }
    }
    return maxContig;
}
int main(){
    vector<int>v={1,4,2,5};
    cout<<longestConsigivite(v);


    return 0;
}