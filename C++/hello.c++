#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;

  while (n--) {
    int x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    int dx = x1 - x2;
    int dy = y1 - y2;
    int d_sq = dx * dx + dy * dy;

    int rsum = r1 + r2;
    int rsub = abs(r1 - r2);
    int rsum_sq = rsum * rsum;
    int rsub_sq = rsub * rsub;

    if (d_sq == 0 && r1 == r2) {
      cout << -1 << '\n';
    } else if (d_sq == rsum_sq || d_sq == rsub_sq) {
      cout << 1 << '\n';
    } else if (rsub_sq < d_sq && d_sq < rsum_sq) {
      cout << 2 << '\n';
    } else {
      cout << 0 << '\n';
    }
  }

  return 0;
}
