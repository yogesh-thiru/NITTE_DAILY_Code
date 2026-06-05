#include<bits/stdc++.h>
using namespace std;

class s{
    public :
        stack<pair<int,int>> st;
        void push(int val){
            int m = st.empty() ? val : min(st.top().second, val);
            st.push({val, m});
        }

        void pop()
        {
            st.pop();
        }
        int top(){
            return st.top().first;
        }
        int getmin(){
            pair<int,int> res = st.top();
            return res.second;
        }
};