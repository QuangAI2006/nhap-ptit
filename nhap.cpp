/*
//THUẬT TOÁN SINH XÂU NHỊ PHÂN THUẬN NGHỊCH
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
// Tập con kế tiếp 
void testCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(k + 1);
    for (int i = 1; i <= k; ++i) {
        cin >> a[i];
    }

    int i = k;
    while (a[i] == n - k + i) i--;
    if (i == 0) a[i] = 0;
    else a[i]++;
    
    while (i < k) {
        a[i + 1] = a[i] + 1;
        i++;
    }
    for (int i = 1; i <= k; ++i) {
        cout << a[i] << " ";
    }
}
// Hoán vị kế tiếp  
void testCase() {
    int n; cin >> n;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    int i = n - 1;
    while (i >= 1 && a[i] >= a[i + 1]) i--;
    if (i == 0) {
        for (int j = 1; j <= n; ++j) {
            a[j] = j;
        }
    }
    else {
        for (int j = n; j > i; --j) {
            if (a[j] > a[i]) {
                swap(a[i], a[j]);
                break;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        cout << a[i] << " ";
    }
}
 // Sinh tổ hợp 
 int n, k;
vector<int> a;

void solve() {

    for (int i = 1; i <= k; ++i) {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i) {
    for (int j = a[i - 1] + 1; j <= n - k + i; ++j) {
        a[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    a.resize(k + 1);
    Try(1);
}

// Sinh hoán vị
int n;
vector<int> a, b;

void solve() {
    for (int i = 1; i <= n; ++i) {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i) {
    for (int j = 1; j <= n; ++j) {
        if (!b[j]) {
            a[i] = j;
            b[j] = 1;
            if (i == n) solve();
            else Try(i + 1);
            b[j] = 0;
        }
    }
}

void testCase() {
    cin >> n;
    a.resize(n + 1);
    b.clear(); b.resize(n + 1, 0);
    Try(1);
}

// Hoán vị ngược
int n;
vector<int> a, b;

void solve() {
    for (int i = 1; i <= n; ++i) {
        cout << a[i];
    }
    cout << " ";
}

void Try(int i) {
    for (int j = n; j >= 1; --j) {
        if (!b[j]) {
            a[i] = j;
            b[j] = 1;
            if (i == n) solve();
            else Try(i + 1);
            b[j] = 0;
        }
    }
}

void testCase() {
    cin >> n;
    a.resize(n + 1);
    b.resize(n + 1, 0);
    Try(1);
}
// Xâu AB có độ dài N 
int n;
string s;

void Try(int i) {
    for (char j = 'A'; j <= 'B'; ++j) {
        s[i] = j;
        if (i == n - 1) cout << s << " ";
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n;
    s.resize(n);
    Try(0);
}
// Xâu nhị phân có K BIT 1 
int n, k;
vector<int> a;

void solve() {
    int cou = 0;
    for (int i : a) {
        if (i == 1) cou++;
    }
    if (cou == k) {
        for (int i : a) cout << i;
        cout << endl;
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        a[i] = j;
        if (i == n - 1) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    a.resize(n);
    Try(0);
}
// HAHAHA
int n;
string s;
vector<string> res;

void solve() {
    if (s[0] == 'H' && s[n - 1] == 'A' && s.find("HH") == -1) {
        res.push_back(s);
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        if (j == 0) s[i] = 'H';
        else s[i] = 'A';
        if (i == n - 1) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n;
    s.resize(n);
    res.clear();
    Try(0);
    sort(res.begin(), res.end());
    for (string i : res) cout << i << endl;
}
// Xâu nhị phân trước 
void testCase() {
    string s; cin >> s;
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '0') {
        s[i--] = '1';
    }
    if (i >= 0) s[i] = '0';
    cout << s;
}
// Tổ hợp tiếp theo 
void testCase() {
    int n, k;
    cin >> n >> k;
    vector<int> a(k + 1);
    map<int, int> mp;
    for (int i = 1; i <= k; ++i) {
        cin >> a[i];
        mp[a[i]]++;
    }
    
    int i = k;
    while (i >= 1 && a[i] == n - k + i) i--;
    if (i == 0) {
        cout << k;
        return ;
    }
    
    a[i]++;
    while (i < k) {
        a[i + 1] = a[i] + 1;
        i++;
    }
    int ans = 0;
    for (int i = 1; i <= k; ++i) {
        if (mp[a[i]] == 0) ans++;
    }
    cout << ans;
}
// Số thứ tự hoán vị 
int n, res;
int a[10], u[10], temp[10];
bool stop;

void solve() {
    res++;
    for (int i = 1; i <= n; ++i) {
        if (a[i] != temp[i])
            return;
    }
    stop = true;
}

void Try(int i) {
    if (stop) return;
    for (int j = 1; j <= n; ++j) {
        if (!u[j]) {
            a[i] = j;
            u[j] = 1;
            if (i == n) solve();
            else Try(i + 1);
            u[j] = 0;
        }
    }
}

void testCase() {
    res = 0; stop = false;
    memset(u, 0, sizeof(u));
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> temp[i];
    }
    Try(1);
    cout << res;
}
// Số thứ tự tổ hợp 
int n, k, res;
int a[20], temp[20];
bool stop;

void solve() {
    res++;
    for (int i = 1; i <= k; ++i) {
        if (a[i] != temp[i])
            return;
    }
    stop = true;
}

void Try(int i) {
    if (stop) return;
    for (int j = a[i - 1] + 1; j <= n - k + i; ++j) {
        a[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}

void testCase() {
    res = 0; stop = false;
    cin >> n >> k;
    for (int i = 1; i <= k; ++i) {
        cin >> temp[i];
    }
    Try(1);
    cout << res;
}
// Đặt tên -1
int n, k;
int a[30];
vector<string> temp;
vector<vector<string>> res;

void solve() {
    vector<string> x;
    for (int i = 1; i <= k; ++i) {
        x.push_back(temp[a[i]]);
    }
    sort(x.begin(), x.end());
    res.push_back(x);
}

void Try(int i) {
    for (int j = a[i - 1] + 1; j <= n - k + i; ++j) {
        a[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    map<string, bool> mp;
    for (int i = 1; i <= n; ++i) {
        string s; cin >> s;
        mp[s] = true;
    }
    temp.push_back("");
    for (auto i : mp) {
        temp.push_back(i.first);
    }
    n = temp.size() - 1;
    Try(1);
    sort(res.begin(), res.end());
    for (auto i : res) {
        for (string j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}
// Đặt tên -2
int n, k;
vector<int> a;

void solve() {
    string s;
    for (int i = 1; i <= k; ++i) {
        s.push_back(a[i] + 'A' - 1);
    }
    cout << s << endl;
}

void Try(int i) {
    for (int j = a[i - 1] + 1; j <= n - k + i; ++j) {
        a[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    a.resize(k + 1, 0);
    Try(1);
}
// Phát lộc
int n;
string s;
vector<string> res;

void solve() {
    if (s.front() == '8' && s.back() == '6' && s.find("88") == -1 && s.find("6666") == -1) {
        res.push_back(s);
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        if (j == 0) s[i] = '6';
        else s[i] = '8';
        if (i == n - 1) solve();
        else Try( i + 1);
    }
}

void testCase() {
    cin >> n;
    s.resize(n);
    Try(0);
    sort(res.begin(), res.end());
    for (string i : res) {
        cout << i << endl;
    }
}
// Hoán vị dãy số 
int n;
vector<int> a, b, u;
vector<vector<int>> res;

void Try(int i) {
    for (int j = 0; j < n; ++j) {
        if (!u[j]) {
            b[i] = a[j];
            u[j] = 1;
            if (i == n - 1) res.push_back(b);
            else Try(i + 1);
            u[j] = 0;
        }
    }
}

void testCase() {
    cin >> n;
    a.resize(n);
    b.resize(n);
    u.resize(n, 0);
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    Try(0);
    sort(res.begin(), res.end());
    for (auto i : res) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}
// Liệt kê tổ hợp 
int n, k;
vector<int> a, b;

void solve() {
    for (int i = 1; i <= k; ++i) {
        cout << a[b[i]] << " ";
    }
    cout << endl;
}

void Try(int i) {
    for (int j = b[i - 1] + 1; j <= n; ++j) {
        b[i] = j;
        if (i == k) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    set<int> s;
    for (int i = 1; i <= n; ++i) {
        int x; cin >> x;
        s.insert(x);
    }
    a.push_back(-1);
    for (auto i : s) a.push_back(i);
    n = s.size();
    b.resize(n + 1);
    for (int i = 0; i <= n; ++i) {
        b[i] = i;
    }
    Try(1);
}
// Dãy số 1 
int n;
vector<int> a;
vector<int> b;

void print() {
    cout << "[";
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i];
        if (i != a.size() - 1) cout << " ";
    }
    cout << "]" << endl;
}

void Try(int i) {
    print();
    if (i == 1) return;
    for (int j = 0; j < i - 1; ++j) {
        b.push_back(a[j] + a[j + 1]);
    }
    a = b;
    a.resize(i - 1);
    b.clear();
    Try(i - 1);
}

void testCase() {
    cin >> n;
    a.resize(n);
    for (int &i : a) cin >> i;
    Try(n);
}
// Di chuyển trong mê cung 1
int n, a[11][11];
vector<string> v;

void Try(int i, int j, string s) {
    if (i == n && j == n) {
        v.push_back(s);
        return;
    }
    if (i < n && a[i + 1][j] == 1)
        Try(i + 1, j, s + 'D');
    if (j < n && a[i][j + 1] == 1)
        Try(i, j + 1, s + 'R');
}

void TestCase() {
    v.clear();
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> a[i][j];
        }
    }
    
    if (a[1][1] == 0 || a[n][n] == 0) {
        cout << "-1\n";
        return;
    }
    Try(1, 1, "");

    if (v.empty()) {
        cout << "-1\n";
        return;
    }
    sort(v.begin(), v.end());
    for (auto x : v) {
        cout << x << " ";
    }
}
// Hoán vị xâu kí tự 
int n;
string a, b;
vector<bool> vs;

void Try(int i) {
    for (int j = 0; j < n; ++j) {
        if (!vs[j]) {
            b[i] = a[j];
            vs[j] = true;
            if (i == n - 1) cout << b << " ";
            else Try(i + 1);
            vs[j] = false;
        }
    }
}

void testCase() {
    cin >> a;
    sort(a.begin(), a.end());
    n = a.length();
    b.resize(n);
    vs.resize(n, false);
    Try(0);
}
// Dãy con tổng bằng k 
int n, k;
vector<int> a, b;
bool hasAnswer;

void solve() {
    int sum = 0;
    for (int i = 0; i < b.size(); ++i) {
        sum += a[b[i]];
    }
    if (sum == k) {
        hasAnswer = true;
        cout << "[";
        for (int i = 0; i < b.size(); ++i) {
            cout << a[b[i]];
            if (i != b.size() - 1) cout << " ";
        }
        cout << "] ";
    }
}

void Try(int i) {
    for (int j = 1; j >= 0; --j) {
        if (j == 1) b.push_back(i);
        if (i == n - 1) solve();
        else Try(i + 1);
        if (j == 1) b.pop_back();
    }
}

void testCase() {
    cin >> n >> k;
    a.resize(n);
    hasAnswer = false;
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    Try(0);
    if (!hasAnswer) cout << -1;
}
// Di chuyển trong ma trận 
int n, m, ans;
int a[105][105];
bool vs[105][105];

void Try(int i, int j) {
    if (i == n && j == m) {
        ans++;
        return;
    }
    if (i + 1 <= n && !vs[i + 1][j])
        Try(i + 1, j);
    if (j + 1 <= m && !vs[i][j + 1])
        Try(i, j + 1);
}

void testCase() {
    ans = 0;
    cin >> n >> m;
    memset(vs, false, sizeof(vs));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> a[i][j];
        }
    }
    Try(1, 1);
    cout << ans;
}

    */
