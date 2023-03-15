#include <iostream>
#include <unordered_set>
#include <queue>
using namespace std;

#include <iostream>


queue<int> remove_duplicates(queue<int>& q) {
    std::unordered_set<int> seen;  
    std::queue<int> new_q; 

    while (!q.empty()) {
        int item = q.front();
        q.pop();
        if (seen.find(item) == seen.end()) {
            seen.insert(item);
            new_q.push(item);
        }
    }

    return new_q;
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(2);
    q.push(4);
    q.push(1);

    queue<int> new_q = remove_duplicates(q);

    while (!new_q.empty()) {
        cout << new_q.front() << " ";  
        new_q.pop();
    }
    cout << std::endl;

    return 0;
}
