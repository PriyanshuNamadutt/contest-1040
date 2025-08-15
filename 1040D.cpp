#include<bits/stdc++.h>
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> a(n);
        for ( int i = 0; i < n; i++ ) {
            cin >> a[i];
        }
        vector<int> b(n);
        for ( int i = 0; i < n; i++ ) {
            b[i] = 2*n - a[i];
        }

        vector<int> ans1(n), ans2(n);
        multiset<int> st1, st2;
        for ( int i = 0; i < n; i++ ) {
            auto it = st1.upper_bound(a[i]);
            ans1[i] = distance( it, st1.end() );
            st1.insert(a[i]);
        }
        for ( int i = n-1; i >= 0; i-- ) {
            auto it = st2.lower_bound(b[i]);
            ans2[i] = distance( st2.begin(), it );
            st2.insert( b[i] );
        }
        int total = 0;
        for ( int i = 0; i < n; i++ ) {
            cout << ans1[i] << " " << ans2[i] << endl;
            total += min( ans1[i] , ans2[i] );
        }
        cout << total << endl;
    }
    return 0;
}
