#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string X, a;
    int N = 0, b = 0;

    int totalSum = 0;

    cin >> X;
    int sX = stoi(X);
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> a >> b;
        int sA = stoi (a);

        totalSum += (sA * b);
    }

    if(sX == totalSum) cout << "Yes" << endl;
    else cout << "No" << endl;
}