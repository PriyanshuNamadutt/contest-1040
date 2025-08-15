#include<iostream>
using namespace std;

int main () {
    int t; cin >> t;
    while ( t-- ) {
        int n; cin >> n;
        int sum = 0;
        for ( int i = 0; i < n; i++ ) {
            int num; cin >> num;
            if ( num == 0 ) sum += 1;
            else sum += num;
        }
        cout << sum << endl;
    }
    return 0;
}
