

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int  n, mn = INT_MAX, idx = -1;  cin >> n;
    long long int  arr[n]; for(long long int  i= 0; i < n; i++) {  
        cin >> arr[i];
        if(arr[i] < mn){
            mn = min (mn, arr[i]);
            idx = i;
        }
    }

    cout << mn << " " << idx + 1 << endl;
    return 0;
}