#include<bits/stdc++.h>
using namespace std;

int maxnum(int x, int y)
{
    if(x>y) return x;
    else return y;
}
int main()
{
    int x,y;
    cin >> x >> y;
    cout << maxnum(x,y);
}
