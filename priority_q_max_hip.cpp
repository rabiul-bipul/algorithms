#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[6] = {10,2,4,8,6,9};

    priority_queue<int> pq;

    for(int i = 0; i < 6; i++)
    {
        pq.push(a[i]);
    }

    while(!pq.empty())
    {
        cout << pq.top() << ' ';
        pq.pop();
    }
}
