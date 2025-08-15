#include<iostream>
#include<vector>
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        vector<int> a(n+1), b(n+1);
        for ( int i = 1; i <= n; i++ ) {
            cin >> a[i] >> b[i];
        }
        vector<int> vis( n+1, 0 );
        vector<int> ans;
        for ( int i = 1; i <= n; i++ ) {
            for ( int j = 1; j <= n; j++ ) {
                if ( i == j ) continue;

                if ( b[j] >= b[i] && a[j] <= a[i] ) vis[i] = 1;
            }
            if ( !vis[i] ) ans.push_back(i);
        }
        cout << ans.size() <<endl;
        for ( int i = 0; i < ans.size(); i++ ) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
