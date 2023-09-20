#include <iostream>
#include <string.h>

using namespace std;

void reverseString(string& str){
    int len = str.length();
    int n = len - 1;
    int i = 0;
    while(i < n){
        if(str[i] == ' ') {
            i++;
            continue;
        }
        else if(str[n] == ' ') {
            n--;
            continue;
        }
        else {
            swap(str[i], str[n]);
        i++;
        n--;
        }
    }
}

int main()
{
    string str;
    getline(cin, str);
    reverseString(str);
    cout << str;
    return 0;
}