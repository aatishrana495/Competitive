#include<bits/stdc++.h>
#define opt std::ios_base::sync_with_stdio(false)
#define I int
#define li      int32_t
#define lli     long long
#define ulli unsigned long long

#define pn           printf("\n")
#define nl           cout<<'\n'
#define sf(N)        scanf("%lld",&N)
#define pf(N)        printf("%lld",N)
#define sf1(N1,N2)    scanf("%lld %lld",&N1,&N2)
#define pf1(N1,N2)    printf("%lld %lld",N1,N2)
#define sf2(N1,N2,N3) scanf("%lld %lld %lld",&N1,&N2,&N3)
#define pf2(N1,N2,N3) printf("%lld %lld %lld",N1,N2,N3)

#define sl          cout<<' '
#define ps          printf(" ")

#define rep(i,a,b)  for(i=a;i<b;i++)
#define repr(i,a,b) for(i=a;i>b;i--)
#define elif        else if
#define mset(a,b)   memset(a,b,sizeof(a))

#define pb      push_back
#define pob     pop_back
#define itr     iterator
#define sz()    size()
#define szof    sizeof
#define lb      lower_bound
#define ub      upper_bound
#define mp      make_pair
#define vlli    vector<lli>
#define plli    pair<lli,lli>
#define vplli   vector<plli >
#define F       first
#define S       second
#define Dup     erase(unique(V.begin(),V.end()),V.end())

#define bs      binary_search
#define ub      upper_bound
#define lb      lower_bound

#define ALL(V)  V.begin(),V.end()

#define MX1     100000
#define MX2     1000000
#define Inf     1000000000000000
#define mod     1000000007

using namespace std;

int main(){
    opt;
    
    lli i,j,T,battles,lr,ur,result;
    
    sf1(battles,T);
    lli a[battles],b[battles];
    rep(i,0,battles){
        sf(a[i]);
    }
    rep(i,0,battles){
        sf(b[i]);
    }
    rep(i,0,T){
        result =0;
        sf1(lr,ur);
        rep(j,lr,ur+1){
            result+= a[j-1]*b[j-1];
        }
        pf(result);
    }
    
    return 0;
}

