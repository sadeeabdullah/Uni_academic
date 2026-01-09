
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;    cin >> t;
    while(t--){
        long long n;    cin >> n;
        long long arr[n + 1];   for(long long i = 1; i <= n; i++)    cin >> arr[i];
        long long ans = INT_MAX;

        for(long long i = 1; i < n;i++)
            for(long long j = i + 1; j <= n; j++)
                ans = min (ans, (arr[i] + arr[j] + j  - i));
        cout << ans << endl;
    }
    return 0;
}