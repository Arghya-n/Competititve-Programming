//BISMILLAHIR RAHMANIR RAHIM
//RHYTHM_086_NS_01
//ALAN_IS_ON....

/*  kokhono kalo khono nil kokhno ba dhushor sada
    amar akash jure chilo tomari ronger mela  :)   :) */

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
#define                thanks                         return
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
int fx[]={1, -1, 1, -1, 2, 2, -2, -2};
int fy[]={2, 2, -2, -2, 1, -1, 1, -1};
char s[4],b[5];
void bfs(pair<int,int> &x ,pair<int,int> &y)
{
    bool vis[9][9];
    memset(vis,0,sizeof(vis));
    vis[x.first][x.second]=1;
    int dis[9][9];
    memset(dis,0,sizeof(dis));
    queue<pair<int,int> >q;
    q.push(pair<int,int>(x.first,x.second));
    bool f=false;
    while(!q.empty()){
        pair<int,int> a;
        a=q.front(),q.pop();
        if(a.first==y.first&&a.second==y.second){
            cout<<"To get from "<<s<<" to "<<b<<" takes "<<dis[a.first][a.second]<<" knight moves."<<endl;
            return ;
        }
        for(int i=0;i<8;i++){
            int vx=a.first+fx[i],vy=a.second+fy[i];
            if(vx<9&&vx>0&&vy<9&&vy>0&&vis&&vis[vx][vy]==0){
                dis[vx][vy]=dis[a.first][a.second]+1;
                vis[vx][vy]=1;
                q.push(make_pair(vx,vy));
            }

        }


    }

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

    while(cin>>s>>b){
        pair<int,int> x,y;
        x.first=int(s[0])-96,x.second=s[1]-48;
        y.first=int(b[0])-96,y.second=b[1]-48;

        //cout<<y.first<<" "<<y.second<<endl;
        bfs(x,y);
    }

}

