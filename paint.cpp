#include <bits/stdc++.h>
using namespace std;

main()
{
    freopen("paint.in","r",stdin);
	  freopen("paint.out","w",stdout);

    int a,b,c,d; cin >> a >> b;
    cin >> c >> d;
    int i;
    int count{0};
    for (int i=0;i<100;i++)
    {
      if (i>=a && i+1<=b)
      {
        count++;
      }
      else if (i>=c && i+1<=d)
      {
        count++;
      }
    }
    cout << count;
    return 0;
}
