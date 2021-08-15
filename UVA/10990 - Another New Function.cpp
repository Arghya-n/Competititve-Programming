//BISMILLAHIR RAHMANIR RAHIM
//RHYTHM_086_NS_01
//ALAN_IS_ON....

#include <bits/stdc++.h>

#define     boost_              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define     loop_iter_(i,n)     for (int i = 0; i < int(n); i++)
#define     for_n(i, n)         for (int i = 1; i <= int(n); i++)
#define     pb                  push_back()
#define     s_sort(s)           sort(s.begin(),s.end())
#define     n_sort(a)           sort(a,a+n)
#define     thank_you           return 0


using namespace std;

typedef long long int ll;
typedef double db;

int phi[2000006];
int dep_phi[2000005];
int dp[2000005];
void sievePhi(){
    phi[0]=0;
    for(int i=2;i<=2000001;i++) phi[i]=i;

    for(int i=2;i<=2000001;i++){
        if(phi[i]==i){
            for(int j=i;j<=2000001;j+=i){
                phi[j]-=phi[j]/i;
            }
        }
    }
}


int main()
{
    boost_;

    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    sievePhi();
    int t,n,m;
    for(int i = 2; i <= 2000000; i++) {
        dep_phi[i] = 1 + dep_phi[phi[i]];
        dp[i] = dp[i-1] + dep_phi[i];
    }
    cin>>t;
    loop_iter_(i,t){

        cin>>n>>m;
        printf("%d\n",dp[m]-dp[n-1]);
        /*for(int j=n;j<=m;j++){
            cout<<phi[j]<<" ";
        }
        cout<<endl;*/

    }


    thank_you;
}

