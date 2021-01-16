1 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
int main() {
    int a, b, k;
    cout << "Enter A<B:";
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        k = a;
        while (k > 0) {
            cout << a << " ";
            k--;

        }
        cout << endl;
        a++;

    }
    return 0;
}

2 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
    int a, b;
    cout << "Enter A>B:";
    cin >> a >> b;
    while (a > 1) {
        a -= b;

    }
    if (a < 0) { cout << a + b;

    }
    else cout << a;
    return 0;
}

3 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
    int n, k = 0, s = 0;
    cout << "Enter n:";
    cin >> n;
    while (k <= n) {
        s = s + k;
        k++;

    }
    cout << k - 1 << '\n';
    cout << s;
    return 0;
}

4 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
    int s = 1000, k = 0;
    double p, r;
    cout << "Enter P:";
    cin >> p;
    while (s <= 1100) {
        r = p * s / 100 + s;
        s = r;
        k++;

    }
    cout << "k=" << k << endl;
    cout << "s=" << s;
    return 0;

}

5 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
    int a, b;
    cout << "Enter a,b:";
    cin >> a >> b;
    while (a % b != 0) {
        a = a % b;
        swap(a, b);

    }
    cout << b;
    return 0;
}

6 задание:
#include<iostream>
#include<math.h>
#include<vector>
#include <Windows.h>
using namespace std;
int main() {
    int n, f = 0, k = 2, x = 0, y = 1;
    cout << "Enter N:";
    cin >> n;
    while (f != n) {
        f = x + y;
        x = y;
        y = f;
        k++;
        
    }
    cout << "k=" << k;
    return 0;
}
