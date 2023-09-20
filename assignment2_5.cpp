#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    //Khai báo stack
    stack<int> stack;
    
    //Mỗi khi gõ push hoặc pop vào terminal thì thực hiện push và pop ở stack
    for(int i = 0; i < n; i++) {
        string command;
        cin >> command;
        //Điền giá trị trên cùng của stack
        if(command == "push") {
            int x;
            cin >> x;
            stack.push(x);
        } else if(command == "pop") {
            //Nếu stack KHÔNG trống thì bỏ giá trị trên cùng của stack
            if(!stack.empty()) {
                stack.pop();
            }
        }
    }

    //Khai báo vector kết quả
    vector<int> resultStack;

    //Khi mà stack KHÔNG trống thì lấy giá trị trên cùng của stack đẩy vào vector
    while(!stack.empty()) {
        resultStack.push_back(stack.top());
        stack.pop();
    }

    //Trả kết quả vector
    for(int i = resultStack.size() - 1; i >= 0; i--) {
        cout << resultStack[i] << " ";
    }

    return 0;
}