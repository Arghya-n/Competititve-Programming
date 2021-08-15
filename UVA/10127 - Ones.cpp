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

ll bigmod(ll a,ll b){
    if(b==0){
        return 1;
    }
    ll tm=bigmod(a,b/2);
    tm=(tm*tm)%MOD;
    if(b%2==1)
        tm=(tm*a)%MOD;
    return tm;

}
int  nSize(int n){
    vector<int> v;
    ll val=1;
    for(int i=0;i<n;i++){
        v.pb(1);
        val=0;
        for(int p=0;p<v.size();p++){
            val=(v[p]+val*10)%n;
        }

        if(val==0){

            break;
        }
    }
    return v.size();
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
    int n;
    while(scanf("%d",&n)!=EOF){
        cout<<nSize(n)<<endl;
    }

}

