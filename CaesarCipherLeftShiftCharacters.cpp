#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl  "\n"
#define nline cout<<"\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)
#define pb push_back
#define lb lower_bound
#define imax INT_MAX
#define imin INT_MIN
#define llmax LLONG_MAX
#define llmin LLONG_MIN

int mod=1e9+7;


int main ()
{
    FASTER
    int n;
    cin>>n;
    cin.ignore();
    string s;
    // getline(cin>>ws,s);
    getline(cin,s);

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ')
            continue;

        if(s[i]-n >= 97)
        {
            s[i]=s[i]-n;
        }

        else
        {
            s[i]=s[i]-6-n;
        }


    }

    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
        {
            s[i]=tolower(s[i]);

        }

    }

    cout<<s<<endl;







    return 0;

}


