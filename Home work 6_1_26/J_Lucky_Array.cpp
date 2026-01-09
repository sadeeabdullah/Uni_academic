
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n , mn = INT_MAX, cnt = 0;    cin >> n;
    long long freq[100005] = {0};
    for(long long i = 0; i < n; i++){
        long long x;   cin >> x;
        if(x < mn) {
            mn = x;
            cnt = 1;
        }
        else if(x == mn) {
            cnt++;
        }

    }

    cout << ((cnt % 2== 0) ? "Unlucky" : "Lucky") << endl;
    return 0;
}