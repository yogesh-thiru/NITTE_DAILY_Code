#include <bits/stdc++.h>
#include<vector>
using namespace std;

// template<typename  T ,typename K>
// auto sum (T a, K b) {
//     return a+b;
// }

//int main(){
// int arr[5]={1,2,3};
// bool flag=true;
// for(int i=0;i<sizeof(arr);i++)
// {
//   if(arr[i]==12)
//   {
//     flag=false;
//     break;
//   }
//   if(flag==false)
//   {
//     cout<<"found!!";
//   }
//   else
//   {
//     cout<<"Not found!!";
//   }
// }

int main()
{
vector<int> v ={1,2,3,4,5,9}; 
int k;
cin >> k;
k = k%v.size();
reverse(v.begin(),v.end());
reverse(v.begin(),v.begin()+k);
reverse(v.begin()+k,v.end());
for(int i : v)
  cout<<i<<" ";

return 0;
}