#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c, d, e, f;

    cin >> a >> b >> c >> d >> e >> f;

    for (int i = -999; i < 1000; i++){
        for (int j = i; j < 1000; j++){
            if ((a * i) + (b * j) == c && (d * i) + (e * j) == f){
                cout << i << ' ' << j << endl;
                return 0;
            }
            else if ((a * j) + (b * i) == c && (d * j) + (e * i) == f){
                cout << j << ' ' << i << endl;
                return 0;
            }
        }
    }
}