#include<bits/stdc++.h>
using namespace std;

int evaluate(vector<string>& sequence){
    stack<int>st;
    for(auto ele : sequence){
        if(ele == "+"){
            int second = st.top();
            st.pop();
            int first = st.top();
            st.pop();
            st.push(first + second);
        }else if(ele == "-"){
            int second = st.top();
            st.pop();
            int first = st.top();
            st.pop();
            st.push(first - second);
        }else if(ele == "*"){
            int second = st.top();
            st.pop();
            int first = st.top();
            st.pop();
            st.push(first * second);
        }else if(ele == "/"){
            int second = st.top();
            st.pop();
            int first = st.top();
            st.pop();
            st.push(first / second);
        }else{
            st.push(stoi(ele));
        }

    }
    return st.top();
}
int main(){
    vector<string> vec = {"2","3","+","3","*"};
    cout<<evaluate(vec);
    return 4;
}
