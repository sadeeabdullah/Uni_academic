
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int  n;  cin >> n;
    long long int  arr[n]; for(long long int  i= 0; i < n; i++)   cin >> arr[i];
    long long q;    cin >> q;
    bool isFound = false;
    for(long long i =0 ; i < n; i++)    if(arr[i] == q){
        isFound = true;
        cout << i << endl;
        break;
    }
    if(!isFound)    cout << -1 << endl;
    return 0;
}