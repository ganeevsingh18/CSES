#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void fastin() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    fastin();
    ll n, m;
    cin >> n >> m;
    vector<vector<char>> mat(n, vector<char>(m));
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    vector<vector<pair<ll,ll>>> prev(n, vector<pair<ll,ll>>(m, {-1, -1}));
    pair<ll,ll> start, end;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 'A') {
                start = {i, j};
            } else if (mat[i][j] == 'B') {
                end = {i, j};
            }
        }
    }

    queue<pair<ll,ll>> q;
    q.push(start);
    visited[start.first][start.second] = true;
    bool flag = false;

    // Define possible directions: up, down, left, right
    vector<pair<ll, ll>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if (make_pair(x, y) == end) {
            flag = true;
            break;
        }

        for (const auto& [dx, dy] : directions) {
            ll nx = x + dx, ny = y + dy;
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && mat[nx][ny] != '#' && !visited[nx][ny]) {
                q.push({nx, ny});
                visited[nx][ny] = true;
                prev[nx][ny] = {x, y};
            }
        }
    }

    vector<char> steps;
    if (flag) {
        cout << "YES" << endl;
        while (end != start) {
            auto [px, py] = prev[end.first][end.second];
            if (end.first > px) {
                steps.push_back('D');
            } else if (end.first < px) {
                steps.push_back('U');
            } else if (end.second < py) {
                steps.push_back('L');
            } else {
                steps.push_back('R');
            }
            end = {px, py};
        }
        reverse(steps.begin(), steps.end());
        cout << steps.size() << endl;
        for (auto c : steps) cout << c;
        cout << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
