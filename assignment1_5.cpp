#include <bits/stdc++.h>


int arr[100];

using namespace std;

int main(){
    for (int i = 0; i <= 4; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + 4);
    int min = arr[0];
    int max = arr[4];
    cout << max + min;
    return 0;
}