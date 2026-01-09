

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int  n;  cin >> n;
    long long int  arr[n]; for(long long int  i= 0; i < n; i++)   cin >> arr[i];
    long long int  ans = 0;
    for(long long int  i= 0; i < n;i++) ans +=arr[i];

    cout << ((ans < 0) ? ans * (-1) : ans ) << endl;
    return 0;
}