//BISMILLAHIR RAHMANIR RAHIM
//RHYTHM_086_NS_01
//ALAN_IS_ON....

#include <bits/stdc++.h>

#define     boost_              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define     loop_iter_(i,n)     for (int i = 0; i < int(n); i++)
#define     for_n(i, n)         for (int i = 1; i <= int(n); i++)
#define     pb                  push_back
#define     s_sort(s)           sort(s.begin(),s.end())
#define     n_sort(a)           sort(a,a+n)
#define     thank_you           return 0


using namespace std;

typedef long long int ll;
typedef double db;



int main()
{
    boost_;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n,q,tm;
    vector <int> a,b;
    cin>>n;
    loop_iter_(i,n){
        cin>>tm;
        a.pb(tm);
    }
    cin>>q;
    loop_iter_(i,q){
        cin>>tm;
        b.pb(tm);

    }
    vector<int> ::iterator it1,it2;
    for(int i=0;i<q;i++){
        it1=lower_bound(a.begin(),a.end(),b[i]);
        it2=upper_bound(a.begin(),a.end(),b[i]);
        if(it1-a.begin()== 0){
            cout<<"X ";

        }
        else{
            cout<<*--it1<<" ";
        }
        if(it2-a.begin()==n){
            cout<<"X "<<endl;

        }
        else{
            cout<<*it2<<" "<<endl;
        }
    }


    thank_you;
}
