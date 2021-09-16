#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=-1,maxnum;
    for(int i=0;i<2;i++){
        cin >> n;
        if( n>maxnum ){
            maxnum = n;
        }
    }
    cout << maxnum;
}
