#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ans = 0;
        int b,p,f,h,c;
        cin>>b>>p>>f>>h>>c;

        if(h>c)
        {
            if( p*2>= b)
            {
                ans = ans + (b/2) * h;
            }
            else{
                ans = ans + p*h;
                int extra = (b - p*2)/2;
                int mini = min(extra,f);
                ans = ans + mini * c;
            }
        }
        else
        {
            if( f*2>= b)
            {
                ans = ans + (b/2) * c;
            }
            else{
                ans = ans + f*c;
                int extra = (b - f*2)/2;
                int mini = min(extra,p);
                ans = ans + mini * h;
            }
        }
        cout<<ans<<endl;
    }
}
