#include<bits/stdc++.h>
using namespace std;

using namespace std;

int main() {
    int n;
    cin >> n;

    //Khai báo queue
    queue<int> Queue;
    
    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;
        //Điền giá trị đầu của queue
        if (command == "enqueue") {
            int x;
            cin >> x;
            Queue.push(x);
        } else if (command == "dequeue") {
            //Nếu queue KHÔNG trống thì loại bỏ giá trị đầu của queue;
            if (!Queue.empty()) {
                Queue.pop();
            }
        }
    }
    //Nếu queue KHÔNG trống thì trả về giá trị đầu tiên của queue sau đó pop
    while (!Queue.empty()) {
        cout << Queue.front() << " ";
        Queue.pop();
    }
    
    return 0;
}