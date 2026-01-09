

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int  n;  cin >> n;
    long long int  arr[n]; for(long long int  i= 0; i < n; i++)   cin >> arr[i];
    for(long long int  i= n - 1; i >= 0;i--) cout << arr[i] << " ";
    return 0;
}