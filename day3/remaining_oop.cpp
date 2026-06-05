#include<bits/stdc++.h>

using namespace std;

/*class Animal{
    public:
   virtual void sound(){
        cout<<"general animal sound"<<endl;
    }
};
class dog:public Animal{

    public:
    void sound(){
        cout<<"bow bow"<<endl;
    }
};

int main(){

   Animal* a = new dog;
   a->sound();

    return 7;
}*/

int main()
{
vector<int> v ={1,2,2,3,3,4,4,4,5,5,9,10}; 
int n=v.size();
int idx=1;
for(int i=1;i<n;i++){
    if(v[i]!=v[i-1])v[idx++]=v[i];
}
cout<<"Total Unique elements :"<<idx<<endl;
for(int i : v)
  cout<<i<<" ";

return 0;
}