#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[999999];
    int cap = 0, noncap = 0;
    cin >> s;
    int i=0;
    while(s[i] != '\0'){
        if(s[i] >= 65 && s[i] <= 90){
            cap++;
        }
        else if( s[i] >= 97 && s[i] <= 122 )noncap++;
        ++i;
    }
    cout << "CAPITAL : " << cap << '\n' << "NON-CAPITAL : " << noncap;
}
