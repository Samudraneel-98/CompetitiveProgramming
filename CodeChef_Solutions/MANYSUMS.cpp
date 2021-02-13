#include <iostream>
using namespace std;

int main()
{
int t;
scanf("%d",&t);

while(t)
{
    int l,r;
    cin>>l>>r;
    if(l == r)
    {
        cout<<1;
    }
    else
    {
        cout<<((r-l)*2 + 1);
    }
    
    cout<<"\n";
    t--;
}
return 0;
}