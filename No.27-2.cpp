#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=i;j>0;j--){
            cout << " ";
        }
        for(int k=0;k<2*(n-i)-1;k++){
            cout << "*";
        }
        cout << "\n";
    }
    for(int i=n;i>1;i--){
        for(int j=i-2;j>0;j--){
            cout << " ";
        }
        for(int k=2*(i-1)-1;k<n*2;k++){
            cout << "*";
        }
        cout << "\n";
    }
}
