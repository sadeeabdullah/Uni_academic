

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int  n;  cin >> n;
    long long int  arr[n]; for(long long int  i= 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] <= 10) cout << "A[" << i << "] = " << arr[i] << endl;
    }   
    return 0;
}