#include<iostream>
#include<vector>
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n, s; cin >> n >> s;
        vector<int> a(3, 0);
        for ( int i = 0; i < n; i++ ) {
            int num; cin >> num;
            a[num]++;
        }

        if ( s == a[1] + 2*a[2] || s >= a[1] + 2*( a[2]+1 ) ) cout << -1 << endl;
        else {
            for ( int i = 0; i < a[0]; i++ ) cout << 0 << " ";
            for ( int i = 0; i < a[2]; i++ ) cout << 2 << " ";
            for ( int i = 0; i < a[1]; i++ ) cout << 1 << " ";
            cout << endl;
        }
    }
    return 0;
}
