#include<iostream>>
using namespace std;
#include<bits/stdc++.h>

class Queue
{
    public:
        vector<int>v;
        void push(int i)
        {
            v.push_back(i);
        }
        void pop()
        {
            v.erase(v.begin());
        }
        void display()
        {
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i];
            }
        }
};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.pop();
    q.display();
    return 0;

}