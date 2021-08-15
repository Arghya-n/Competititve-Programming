//BISMILLAHIR RAHMANIR RAHIM
//RHYTHM_NS_01_( Extinct :) )

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using    namespace __gnu_pbds;


//define

#define                boost_                         ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define                iter_(i,n)                     for (int i = 0; i < int(n); i++)
#define                for_n(i, n)                    for (int i = 1; i <= int(n); i++)
#define                pb                             push_back
#define                mp                             make_pair
#define                itr                            ::iterator
#define                s_sort(s)                      sort(s.begin(),s.end())
#define                n_sort(a)                      sort(a,a+n)
#define                thank_you                      return 0
#define                thanks                         return
#define                pii                            pair<int,int>
#define                ss                             second
#define                fi                             first
#define                rev(i,n)                       for(int i=n;i>=0;i--)
#define                print_array(a)                 for(int i=0;i<n;i++)  cout<<a[i]<<" ";
#define                precise_impact                 cout<<setprecision(10)<<fixed;
#define                endl                           "\n"

using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> oset;
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
int egcd(int a,int b,int &x,int &y){
    if(a==0){
        x=0;
        y=1;
        return b;
    }
    int x1,y1;
    int d=egcd(b%a,a,x1,y1);
    x=y1-(b/a)*x1;
    y=x1;
    return d;
}

void solve();


int main()
{
    boost_;
    precise_impact;
    //Here we go...
    int t=1,i=1;
    //cin>>t;
    while(t--)
        solve();

    thank_you;
}


void solve()
{
	string s;
	while(getline(cin,s)){
		int c=0,bit=0,bit1=0;
		for(int i=0;i<s.size();i++){
			if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
				if(bit){
					continue;
				}
				else{
					bit=1;
				}
				//bit1=1;
			}
			else
				bit=0;
			if(bit){
				c++;
			}
		}
		cout<<c<<endl;
	}
	
}



