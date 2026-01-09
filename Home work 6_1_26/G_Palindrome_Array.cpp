

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int  n;  cin >> n;
    long long int  arr[n]; for(long long int  i= 0; i < n; i++)   cin >> arr[i];
    bool isPalindrome = true;
    for(long long int  i= 0, j = n - 1; i < j;i++, j--)
        if(arr[i] != arr[j]){
            isPalindrome = false;
            break;
        }
    cout << ((isPalindrome) ? "YES" : "NO") << endl;
    return 0;
}