#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define vt vector
#define ll long long
#define ld long double
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define mp make_pair
#define FOR(i, n) for(int i=0;i<n;i++)
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int i = 0;
        if(n>m){
            int g = 0;
            while(n!=m){
                g++;
                n-=2;
                m-=1;
            }
            cout << g << endl;
        }else {
            while(n!=m){
            
                i++;
                n+=2;
                m+=1;
            } 
            cout << i << endl;
        }
    }
    
}


