
#include <bits/stdc++.h>
using namespace std;
/* THUẬT TOÁN SINH XÂU NHỊ PHÂN THUẬN NGHỊCH
int n;
string s;

void solve() {
    string rs = s;
    reverse(rs.begin(), rs.end());
    if (rs == s) {
        for (char i : s) {
            cout << i << " ";
        }
        cout << endl;
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        s[i] = j + '0';
        if (i == n - 1) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n;
    s.resize(n);
    Try(0);
}
// LỌC DỮ LIỆU TRÙNG TRONG DSLK ĐƠN
void testCase() {
    int n; cin >> n;
    map<int, bool> mp;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        if (mp[a[i]] == 0) {
            cout << a[i] << " ";
            mp[a[i]] = 1;
        }
    }
}
// XÂU NHỊ PHÂN KẾ TIẾP
void testCase() {
    string s; cin >> s;
    for (int i = s.length() - 1; i >= 0; --i) {
        if (s[i] == '1') s[i] = '0';
        else {
            s[i] = '1';
            break;
        }
    }
    cout << s;
}

    */