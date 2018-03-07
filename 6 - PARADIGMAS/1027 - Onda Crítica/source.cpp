#include <bits/stdc++.h>

using namespace std;

struct ponto {
  int x, y;

  ponto() {}
  ponto(int _x, int _y) : x(_x), y(_y) {}

  bool operator < (const ponto &aux) const {
    if (x < aux.x) return true;
    else if (x == aux.x) return y < aux.y;
    else return false;
  }
};

const int MAXN = 1005;
int dp[MAXN][2];
vector <ponto> pontos;
int n;

int getPontosCriticos() {
  for (int i = 0; i < n; ++i) {
    dp[i][0] = dp[i][1] = 1;
    for (int j = i - 1; j >= 0; --j) {
      const ponto &a = pontos[j];
      const ponto &b = pontos[i];
      if (b.x > a.x) {
        if (b.y - a.y == 2) {
          dp[i][0] = max(dp[i][0], dp[j][1] + 1);
        }
        if (a.y - b.y == 2) {
          dp[i][1] = max(dp[i][1], dp[j][0] + 1);
        }
      }
    }
  }
  int maxi = 1;
  for (int i = 0; i < n; ++i) {
    maxi = max(maxi, max(dp[i][0], dp[i][1]));
  }
  return maxi;
}

int main(void) {

  while (cin >> n) {

    pontos.clear();

    for (int i = 0; i < n; ++i) {

      int x, y; cin >> x >> y;
      ponto p = ponto(x, y);
      pontos.push_back(p);
    }
    
    sort(pontos.begin(), pontos.end());
    cout << getPontosCriticos() << endl;
  }
  return 0;
}