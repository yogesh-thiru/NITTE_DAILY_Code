// #include<bits/stdc++.h>
// #include<string.h>
// using namespace std;
// // int solve(string s){
// //    int count= 0;
// //    stringstream ss(s);
// //    string word ,res;
// //    while(ss >> word){
// //     res = word;
// //    }
// //    count = res.size();
// //     return count;
// // }
// string reverse(string s)
// {
//     stringstream ss(s);
//     string curr = ""; string ans = "";
//     while(ss>>curr)
//     {
//         if(ans == "") ans = curr;
//         else ans = curr + " " + ans;
//     }
//     return ans;
// }

// bool lc459(string s){ //s = abcd

// string doubled = s+s; //abcdabcd
// string trimmed = doubled.substr(1,doubled.size()-2);
// //abcdabc
// if(trimmed.find(s) != string::npos)return true;
// else false;


// }
// int main(){
//     string s="this is an example sentence";

//     cout<<reverse(s);
//     return  8;
// 

#include <bits/stdc++.h>
using namespace std;

// int lengthOfSubString(string s) {
    // unordered_set<char> set;
    // int l = 0;
    // int maxL = 0;
    // for(int r = 0; r < s.length(); r++) {
    //     while(set.count(s[r])) {
    //         set.erase(s[l]);
    //         l++;
    //     }
    //     set.insert(s[r]);
    //     maxL = max(max, r-l+1);
    // }
    // return maxL;

//  int right = 0,left = 0;int cnt[128] ={0}; int maxi = 0;
//     for( right ; right < s.size();right++){
//         cnt[s[right]]++;
//         while(cnt[s[right]] > 1 ){
//             cnt[s[left]]--; left++;
//         }
//         maxi = max(maxi,right - left + 1);
//     }
//     return maxi;
// }

int main() {
    if( cout<<"ice" ,false){
        cout<<"ice";
    } 
    else {
        cout<<"cream";
    }
}