//BISMILLAHIR RAHMANIR RAHIM
//RHYTHM_086_NS_01
//ALAN_IS_ON....

#include <bits/stdc++.h>

//define

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

//data type
typedef long long int ll;
typedef unsigned long long int ulli;
typedef double db;


//constants
#define PI acos(-1.00)
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
void solve();


int main()
{
    boost_;
    precise_impact;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    //Here we go...
    solve();

    thank_you;
}


void solve()
{
    int n,p=0;
    bool space =true;
    while(true){
        cin>>n;
        if(n!=0&&!space)
            printf("\n");
        else if(n==0)
            break;
        bool flag=false;
        int val1=0,val2=0;
        vector<pair<int,int> > vp;
        for(int i=1000;i<=99999;i++){
            int tm=n*i,tm2=i;
            if(tm>99999)
                break;
            set<int> v1,v2;
            int c=5;
            while(c--){
                v1.insert(tm2%10);
                tm2/=10;
            }
            c=5;
            while(c--){
                v1.insert(tm%10);
                tm/=10;
            }
            //cout<<v1.size()<<" "<<v2.size()<<endl;

            if(v1.size()==10){
                flag=true;
                vp.pb(mp(n*i,i));
            }
            v1.clear(),v2.clear();
        }
        if(flag){
            iter_(i,vp.size()){
                printf("%05d / %05d = %d\n",vp[i].first,vp[i].second,n);
            }
            space=false;

        }
        else{
            printf("There are no solutions for %d.\n",n);
            space =false;
        }
    }
}
