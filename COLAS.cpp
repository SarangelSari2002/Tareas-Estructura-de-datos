#include <queue>
#include <iostream>
#include <stack>
using namespace std;

int main() {

    queue<int>myqueue;
    myqueue.push(1);
    myqueue.push(2);
    myqueue.push(3);
    myqueue.push(4);
    myqueue.push(5);

    
    stack<int> mypila;

    
    while (!myqueue.empty()) {
        mypila.push(myqueue.front());
        myqueue.pop();
    }

    while (!mypila.empty()) {
        myqueue.push(mypila.top());
        mypila.pop();
    }

    while (!myqueue.empty()) {
        cout << myqueue.front() << " ";
        myqueue.pop();
    }
    return 0;
}

