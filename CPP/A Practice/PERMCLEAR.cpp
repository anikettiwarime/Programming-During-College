#include <bits/stdc++.h>
using namespace std;

void solve()
{
  //Solve here
  unordered_set<int> s;
  int ss;
  cin >> ss;
  for (int i = 0;i < ss;i++)
  {
    int x;
    cin >> x;
    s.insert(x);
  }

  cin >> ss;
  for (int i = 0;i < ss;i++)
  {
    int x;
    cin >> x;
    s.erase(x);
  }


  int arr[s.size()];

  int i = s.size()-1;
  for (auto x : s) {
    arr[i] = x;
    i--;
  }

  for (auto x : arr)
    cout << x << " ";

  cout << endl;

 

  
}


//Driver Code
int main()
{
  int t;
  cin >> t;
  while (t--)
    solve();
  return 0;
}
