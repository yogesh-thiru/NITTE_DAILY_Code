#include<bits/stdc++.h>
using namespace std;
// class Stack{
//     public:
//           vector<int> v;
//           int size=0;
//         void push(int val){
//             v.push_back(val);
//             size++;
//         }
//         void pop()
//         {
//             v.pop_back();
//             size--;
//         }
//         void display()
//         {
//             for(int i=0;i<size;i++)
//             {
//                 cout<<v[i]<<endl;
//             }
//         }
// };
// int main()
// {
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.display();
//     s.pop();
//     s.display();
//     return 0;
// }


bool isvalid(string s)
{
    stack<char> st;
    for(auto c:s)
    {
        if(c=='(' || c=='{' || c=='[')
        {
            st.push(c);
        }
        else
        {
            if(st.empty()) return false;
            char top=st.top();
            if((top=='(' && c==')')||(top=='{' && c=='}')||(top=='[' && c==']'))
            st.pop();
            else return false;
        }
    }
    if(st.empty()) return true;
    else return false;
}
int main()
{
    string input;
    cin>>input;
    cout<<isvalid(input);
}
