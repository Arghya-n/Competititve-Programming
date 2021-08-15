
//BISMILLAHIR RAHMANIR RAHIM
//RHYTHM_086_NS_01
//ALAN_IS_ON....

#include <bits/stdc++.h>

#define     boost_              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define     forn(i,n)           for (int i = 0; i < int(n); i++)
#define     for_n(i, n)         for (int i = 1; i <= int(n); i++)
#define     s_sort(s)           sort(s.begin(),s.end)
#define     n_sort(a)           sort(a,a+n)
#define     thank_you           return 0


using namespace std;

typedef long long int ll;
typedef unsigned long long int ulli;
typedef double db;


ll phi[100000000];

void eulers_totient()
{
    int i,j;
    for(i=1;i<=1000000001;i++){
        phi[i]=i;

    }
    for(i=2;i<=1000000001;i++){
        if(phi[i]==i){
            for(j=i;j<=1000000001;j+=i){
                phi[j]-=phi[j]/i;

            }
        }
    }

}


int main()
{
    boost_
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    eulers_totient();
    int t,n;
    while(scanf("%lld",&n)&&n){

        cout<<phi[n]<<endl;
    }



    thank_you;
}

