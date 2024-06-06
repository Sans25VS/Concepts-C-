#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);  // Initialize the vector with size n
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    bool allEven = all_of(v.begin(), v.end(), [](int x) { return x % 2 == 0; });
    cout << allEven << endl;
    
    return 0;
}
