// simple
while(!pq.empty())
    {
        cout << pq.top() << ' ';
        pq.pop();
    }
}

//function
void showpq(priority_queue<int> gq)
{
    priority_queue<int> g = gq;
    while (!g.empty()) {
        cout << ' ' << g.top();
        g.pop();
    }
    cout << '\n';
}

// min heap
void showpq(
    priority_queue<int, vector<int>, greater<int> > g)
{
    while (!g.empty()) {
        cout << ' ' << g.top();
        g.pop();
    }
    cout << '\n';
}

// driver code

int main()
{
    int arr[6] = { 10, 2, 4, 8, 6, 9 };
    priority_queue<int, vector<int>, greater<int> > gquiz( arr, arr + 6);
    cout << "Priority Queue : ";
    showpq(gquiz);
}
