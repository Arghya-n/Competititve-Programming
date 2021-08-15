#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ulli;
typedef double db;

#define PI acos(-1.00)

bool prime[105];
void sieve(){
    memset(prime,true,sizeof(prime));
    prime[1]=false;
    for(int i=4;i<=100;i+=2){
        prime[i]=false;
    }
    int tm=sqrt(101);
    for(int i=3;i<=tm;i+=2){
        if(prime[i]){
            for(int j=i*i;j<=101;j+=(i+i)){
                prime[j]=false;
            }
        }
    }
}


int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n;
    sieve();
    while(true){
        cin>>n;
        if(n==0)
            break;
        int tab[101];
        memset(tab,0,sizeof(tab));
        for(int p=2;p<=n;p++){
            int x=p;
            for(int i=2;i<=n;i++){

                if(prime[i]){
                    if(x%i==0){

                        while(x%i==0){
                            tab[i]++;
                            x/=i;
                        }
                    }
                }
            }
        }
        printf("%3d! =",n);
        int c=0;
        for(int i=2;i<=n;i++){


            if(prime[i]){
                c++;
                if(c>15){
                    printf("\n      ");
                    c=0;
                }
                printf("%3d",tab[i]);
            }
        }
        cout<<endl;


    }
}

