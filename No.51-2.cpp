#include<bits/stdc++.h>
using namespace std;

void Capitalcount(char s[999999]){
    int ans,ans2,len = strlen(s);
    for(int i=0;i<len;i++){
        if(isupper(s[i])) ans++;
        else if(islower(s[i])) ans2++;
    }
    cout << "Capital : " << ans  << '\n';
    cout << "Non-capital : "<< ans2;
}
int main()
{
    char s[999999];
    cin >> s;
    Capitalcount(s);;
}
