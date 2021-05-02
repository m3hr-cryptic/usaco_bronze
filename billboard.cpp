#include <bits/stdc++.h>
using namespace std;
//LINK: http://www.usaco.org/index.php?page=viewproblem2&cpid=759
main()
{
    freopen("billboard.in","r",stdin);
	  freopen("billboard.out","w",stdout);

    int x1,x2,x3,x4,x5,x6,y1,y2,y3,y4,y5,y6; cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    cin >> x5 >> y5 >> x6 >> y6;
    int area1 = (x2-x1)*(y2-y1);
    int area2 = (x4-x3)*(y4-y3);
    //cout << area1 << " " << area2;

    int int1 = (max(0,(min(x2,x6)-max(x1,x5))))*(max(0,(min(y2,y6)-max(y1,y5))));
    int int2 = (max(0,(min(x6,x4)-max(x5,x3))))*(max(0,(min(y4,y6)-max(y5,y3))));
    //cout << area1 << " " << area2 << " " << int1;
    int req = (area1+area2)-(int1+int2);
    cout << req;
    return 0;
}
