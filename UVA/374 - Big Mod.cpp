//BISMILLAHIR RAHMANIR RAHIM
//RHYTHM_086_NS_01
//ALAN_IS_ON....

#include <bits/stdc++.h>

#define                boost_                         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define                iter_(i,n)                     for (int i = 0; i < int(n); i++)
#define                for_n(i, n)                    for (int i = 1; i <= int(n); i++)
#define                pb                             push_back
#define                mp                             make_pair
#define                itr                            ::iterator
#define                s_sort(s)                      sort(s.begin(),s.end())
#define                n_sort(a)                      sort(a,a+n)
#define                thank_you                      return 0
#define                precise_impact                 cout<<setprecision(10)<<fixed;

using namespace std;

typedef long long int ll;
typedef double db;
#define MOD 1000000007

ll bigmod(ll a,ll b,ll M){
    if(b==0){
        return 1;
    }
    ll tm=bigmod(a,b/2,M);
    tm=((tm%M)*(tm%M))%M;
    if(b%2==1)
        tm=(tm*a)%M;
    return tm;

}
void solve();


int main()
{
    boost_;
    precise_impact;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //Here we go...
    solve();

    thank_you;
}


void solve()
{
    ll b,p,m;
    while(scanf("%lld%lld%lld",&b,&p,&m)!=EOF){
        cout<<bigmod(b,p,m)<<endl;
    }

}

