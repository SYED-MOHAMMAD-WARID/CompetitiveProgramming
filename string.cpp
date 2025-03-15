#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s1,s2;
    cin >> s1 >> s2;
    string c = s1 + s2;
    string temp = s1;
    s1[0]= s2.front();
    s2[0] = temp.front(); 
    cout << s1.size() << " " << s2.size() << endl;
    cout << c << endl;
    cout << s1 << " " << s2;
  return 0;
}
