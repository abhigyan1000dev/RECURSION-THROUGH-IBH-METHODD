#include <bits/stdc++.h>
using namespace std;
void display(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout<<endl;
}
void insert(stack<int>&st, int temp)
{
    if (st.empty())
    {
        st.push(temp);
        return;
    }

    int val = st.top();
    st.pop();
    insert(st, temp);

    st.push(val);
}
void reversestack(stack<int> &st)
{ // base
    if (st.size() == 1)
    {
        return;
    }
    //HYPOTHEIS
    int temp = st.top();
    st.pop();
    reversestack(st);
    //INDUCTION

    insert(st, temp);
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    display(st);
    reversestack(st);
    display(st);
    return 0;
}