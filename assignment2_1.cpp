#include<bits/stdc++.h>
int a[10000];

using namespace std;

int main(){
    int count = 0;
    int n;
    cin >> n;
    
    //Điền dữ liệu của array
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    //So sánh các cặp số cạnh nhau
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] == a[j]){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}