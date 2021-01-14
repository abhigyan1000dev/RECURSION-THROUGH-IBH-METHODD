#include <bits/stdc++.h>
using namespace std;
void display(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}
void solve(stack<int> &st, int k)
{
    if(k==1)
    {
    st.pop();
    return;
    }
    int temp=st.top();
    st.pop();
    solve(st,k-1);

    //Induction
    st.push(temp);


}
stack<int> deletemidelemnt(stack<int>& st, int size)
{
    if (st.size() == 0)
    {
        return st;
    }

    int k = (size / 2) + 1;
    solve(st, k);
    return st;
}

int main()
{
    stack<int> st;
    st.push(4);
    st.push(68);
    st.push(2);
    st.push(66);
    st.push(56);
    cout << "\nBefore Sorting" << endl; // Which is inserted at the last comes first;
    display(st);
    int size = st.size();
   
    deletemidelemnt(st, size);
  cout << "\nAfter Deletion" << endl; 
    display(st);
    return 0;
}