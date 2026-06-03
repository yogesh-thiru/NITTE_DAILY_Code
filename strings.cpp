#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s){
string cleaned ;
for(char ch : s){
    if(isalnum(ch)){
    cleaned+= tolower(ch);
    }
}
int left = 0; int right = cleaned.size()-1;
while(left <= right){
    if(cleaned[left] != cleaned[right]){
        return false;
    }
    left++; right--;
}












}

string substr(int st ,int end ,string orginal_str){
string res ;

for(int i =0;i < end;i++){
    res+=orginal_str[i];
}
return res;
}

string append(string str1 , string str2){
    str1+=str2;
    return str1;
}

int find(string str1 , string target){

    for(int i =0; i < str1.size();i++){
        if(){
        
        }
    }
}
int main(){

    string name , dept,class_no;
    cin>>name>>dept;
    getline(cin,class_no);
    cout<<name<<dept<<class_no;


    return 7;
}

