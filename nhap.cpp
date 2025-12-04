/*
//THUAT TOAN SINH
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
// TONG DAY CON BANG K
int n, k, ans;
vector<int> a, b;

void solve() {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i] * b[i];
    }
    if (sum == k) {
        ans++;
        for (int i = 0; i < n; ++i) {
            if (b[i]) cout << a[i] << " ";
        }
        cout << endl;
    }
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        b[i] = j;
        if (i == n - 1) solve();
        else Try(i + 1);
    }
}

void testCase() {
    cin >> n >> k;
    a.resize(n);
    b.resize(n);
    for (int &i : a) cin >> i;
    Try(0);
    cout << ans;
}
//XOA DU LIEU TRONG DSLK DON
void testCase() {
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int x; cin >> x;
    for (int i = 0; i < n; ++i) {
        if (a[i] != x) cout << a[i] << " ";
    }
}
// LOC DU LIEU TRONG DSLK DON
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
// XAU NHI PHAN KE TIEP
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
// TAP CON KE TIEP
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
// HOAN VI KE TIEP 
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
 // SINH TO HOP
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

// SINH HOAN VI
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

// HOAN VI NGUOC
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
// XAU AB CO DO DAI N
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
// XAU NHI PHAN CO K BIT 1
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
// XAU NHI PHAN TRUOC 
void testCase() {
    string s; cin >> s;
    int i = s.length() - 1;
    while (i >= 0 && s[i] == '0') {
        s[i--] = '1';
    }
    if (i >= 0) s[i] = '0';
    cout << s;
}
// TO HOP TIEP THEO
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
// SO THU TU HOAN VI
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
// SO THU TU TO HOP
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
// HOAN VI DAY SO
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
// LIET KE TOP HOP
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
// HOAN VI XAU KI TU
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
// DAY CON TONG BANG K 
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
//DAY CON TANG DAN
int n;
vector<int> a, b;
vector<vector<int>> res;

void solve() {
    if (b.size() < 2) return;
    vector<int> c(b.begin(), b.end());
    sort(c.begin(), c.end());
    if (b == c) res.push_back(b);
}

void Try(int i) {
    for (int j = 0; j <= 1; ++j) {
        if (j == 1) b.push_back(a[i]);
        if (i == n - 1) solve();
        else Try(i + 1);
        if (j == 1) b.pop_back();
    }
}

bool cmp(vector<int> a, vector<int> b) {
    string x = "", y = "";
    for (int i : a) x += to_string(i) + " ";
    x.pop_back(); // remove the last space
    for (int i : b) y += to_string(i) + " ";
    y.pop_back();
    return x < y;
}

void testCase() {
    cin >> n;
    a.resize(n);
    for (int &i : a) cin >> i;
    Try(0);
    sort(res.begin(), res.end(), cmp);
    for (auto i : res) {
        for (int j : i) cout << j << " ";
        cout << endl;
    }
}
    //LIET KE XAU KY TU
    char c;
int k;
string s;

void Try(char i) {
    for (char j = i; j <= c; ++j) {
        s.push_back(j);
        if (s.length() == k) cout << s << endl;
        else Try(j);
        s.pop_back();
    }
}

void testCase() {
    cin >> c >> k;
    Try('A');
}
    //SO XA CACH
    int n;
vector<int> a;
vector<bool> vs;

void solve() {
    for (int i = 1; i < n; ++i) {
        if (abs(a[i] - a[i + 1]) == 1)
            return;
    }
    for (int i = 1; i <= n; ++i) {
        cout << a[i];
    }
    cout << endl;
}

void Try(int i) {
    for (int j = 1; j <= n; ++j) {
        if (!vs[j]) {
            vs[j] = true;
            a[i] = j;
            if (i == n) solve();
            else Try(i + 1);
            vs[j] = false;
        }
    }
}

void testCase() {
    cin >> n;
    a.resize(n + 1);
    vs.resize(n + 1, false);
    Try(1);
}
    // TRO CHOI VOI CAC CON SO 
    int n;
vector<int> a;
vector<bool> vs;

void solve() {
    for (int i = 1; i < n; ++i) {
        if (abs(a[i] - a[i + 1]) == 1)
            return;
    }
    for (int i = 1; i <= n; ++i) {
        cout << a[i];
    }
    cout << endl;
}

void Try(int i) {
    for (int j = 1; j <= n; ++j) {
        if (!vs[j]) {
            vs[j] = true;
            a[i] = j;
            if (i == n) solve();
            else Try(i + 1);
            vs[j] = false;
        }
    }
}

void testCase() {
    cin >> n;
    a.resize(n + 1);
    vs.resize(n + 1, false);
    Try(1);
}

    */
