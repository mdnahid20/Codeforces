/*** In the name of Allah(swt), the most gracious, most merciful.***/
/*** Alhamdulillah for Everything ***/


#include<bits/stdc++.h>
using namespace std;

typedef bool                   boo;
typedef int                    li;
typedef long                   il;
typedef unsigned long          ul;
typedef long long int          ll;
typedef unsigned long long     ull;
typedef double                 dd;
typedef string                 str;

#define vli                    vector < li >
#define vll                    vector < ll >
#define sli                    set < li >
#define sll                    set < ll >
#define pli                    pair < li , li >
#define pll                    pair < ll , ll >
#define vpi                    vector < pair < li , li > >
#define vpl                    vector < pair < ll , ll > >
#define mpl                    map < ll , ll >

#define Test                   ll t; std :: cin >> t; while(t--)
#define input(a , n)           for( int i = 0 ; i < n ; i++ ) std :: cin >> a[i];
#define lp(a , i , b)          for( ll i = a ; i < b ; i++ )
#define rlp(a , i , b)         for( ll i = a; i >= b ; i-- )
#define sz(x)                  x.size()
#define len(z)                 z.begin() , z.end()
#define ci(x)                  std :: cin >> x;
#define co(x)                  std :: cout << x nl;
#define fix(x)                 fixed << setprecision(x)
#define mem(z , l)             memset( z , l , sizeof(z) )
#define MP                     make_pair
#define pb                     push_back
#define F                      first
#define S                      second
#define nl                     << endl;
#define nll                    std :: cout << endl;
#define cy                     std :: cout << "YES" << endl;
#define cn                     std :: cout << "NO" << endl;
#define rn                     return;
#define Good_Bye               return 0;
#define gcd(a , b)             __gcd( a , b )
#define lcm(a , b)             ( a * ( b / gcd( a , b ) ) )
#define Faster                 ios_base :: sync_with_stdio( 0 ); cin.tie( 0 ); cout.tie( 0 );

const double eps =             1e-9;
const int inf =                2000000000;
const ll infLL =               9000000000000000000;
const ll MOD =                 1e+7;
const double PI =              3.141592653589793238462643383279;

///_____________________________________________ L E T ' S  B E G I N ____________________________________________________________

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen( "input.txt" , "r" , stdin );
    freopen( "output.txt" , "w" , stdout );
    #endif */
    Faster
    ll first(0),second(0);
    vector<ll>v1,v2;
        int n;
        cin>>n;
        ll a[n];
        lp(0,i,n)
        {
            cin>>a[i];
            if(a[i]>=0)
            {
                first+=a[i];
                v1.pb(a[i]);
            }
            else
            {
                second+= (-a[i]);
                v2.pb(-a[i]);
            }
        }
        if(first==second)
        {
            int k=max(v1.size(),v2.size());
            lp(0,i,k)
            {
                if(v1[i]>v2[i])
                {
                    cout<<"first\n";
                    return 0;
                }
                if(v1[i]<v2[i])
                {
                    cout<<"second\n";
                    return 0;
                }
            }
            if(a[n-1]>=0)
            {
                cout<<"first\n";
                return 0;
            }
            else
            {
                cout<<"second\n";
                return 0;
            }
        }
        else if(first>second)
        {
            cout<<"first\n";
            return 0;
        }
        else
        {
            cout<<"second\n";
            return 0;
        }
    Good_Bye
}
//                                                                                      author : Md. Nahid Chowdhury(IIUC_CSE48th Batch)
///||||||||||||||||||||||||||||||||||||||||||||||| E N D ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||


