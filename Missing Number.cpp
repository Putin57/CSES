#include<bits/stdc++.h>
#include<stdio.h>
#include<ctype.h>
#define code using namespace std;
#define ll long long
typedef long long int lli;
#define dl double
#define str string
#define YES printf("YES\n");
#define Yes printf("Yes\n");
#define yes printf("yes\n");
#define NO printf("NO\n");
#define No printf("No\n");
#define no printf("no\n");
#define loop int t;cin>>t;while(t--)
#define puts printf
#define gcd __gcd
#define elif else if
#define stop break;
#define go continue;
#define _x_ exit(0);
#define suru begin()
#define ses end()
#define END return 0;
#define start int main()
#define vi vector<int>
#define vs vector<str>
#define vii vector<ll int>
#define si set<int>
#define sii set<ll int>
#define gi greater<int>
#define pb push_back
#define ppb pop_back
#define TurboSpeed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
code
class Solution{
public:
    void solve(){
        ll n; cin>>n;
        vii arr(n-1);
        ll count=0;
        for(ll i=0;i<n-1;i++){
            cin>>arr[i];
            count+=arr[i];
        }
        ll total=n*(n+1)/2;
        cout<<total-count<<"\n";
    }
};

































start{
    TurboSpeed
    Solution().solve();
    END
}
