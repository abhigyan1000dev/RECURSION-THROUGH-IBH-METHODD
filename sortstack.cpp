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

void insertnoattop(stack<int> &st, int temp)
{
    if (st.size() == 0 || temp >= st.top())
    {
        st.push(temp);
        return;
    }

    int val = st.top();
    st.pop();
    insertnoattop(st, temp);
    st.push(val);
}

void sort_stack(stack<int> &st)
{
    //BASE CONDITION
    if (st.size() == 1)
    {
        return;
    }

    //HYPOTHESIS
    int temp = st.top();
    st.pop();
    sort_stack(st);

    //INDUCTION
    insertnoattop(st, temp); //[[0,1,5]]
}

int main()
{
    stack<int> st;
    st.push(4);
    st.push(68);
    st.push(2);
    st.push(66);
    cout << "\nBefore Sorting" << endl; // Which is inserted at the last comes first;

    display(st);
    cout << "\nAfter Sorting" << endl;
    sort_stack(st); // Which is inserted at the last comes first;
    display(st);
    return 0;
}