

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int  n;  cin >> n;
    long long int  arr[n]; for(long long int  i= 0; i < n; i++)   cin >> arr[i];
    for(long long int  i= 0; i < n - 1;i++)
        for(long long j = i + 1; j < n; j++)
            if(arr[i] > arr[j])
                swap(arr[i], arr[j]);
    for(long long val : arr) cout << val << " ";
    return 0;
}