
//BISMILLAHIR RAHMANIR RAHIM
//RHYTHM_086_NS_01
//ALAN_IS_ON....

#include <bits/stdc++.h>

//bunch-1
#define     boost_              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define     forn(i,n)           for (int i = 0; i < int(n); i++)
#define     for_n(i, n)         for (int i = 1; i <= int(n); i++)
#define     s_sort(s)           sort(s.begin(),s.end)
#define     n_sort(a)           sort(a,a+n)
#define     thank_you           return 0
#define     judge_input         freopen("in.txt","r",stdin)
#define     judge_output        freopen("out.txt","w",stdout)

using namespace std;

typedef long long int ll;
typedef unsigned long long int ulli;
typedef double db;

int phi(ll n){
    ll i=1,j,ex=n;
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            ex-=ex/i;
        }
    }
    if(n>1){
        ex-=ex/n;
    }
    return ex;

}

int main()
{
    boost_;
    judge_input;
    judge_output;
    ll n;
    while(scanf("%lld",&n)&&n){
        cout<<phi(n)<<endl;
    }


    thank_you;
}
