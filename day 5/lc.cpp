#include<bits/stdc++.h>
using namespace std;

//1700

int burger(queue<int>ppl , queue<int>food){
int cnt[2] ={0,0 };
for(auto p : ppl){ 
    cnt[p]++;
}
for(auto f : food){
   if(cnt[f] == 0)break;
   cnt[f]--;
}
return cnt[0]+cnt[1];

}

int main(){

   return haystack.find(needle) ;

    return 7;
}