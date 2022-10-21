#include <bits/stdc++.h>
using namespace std;

void solve()
{
  //Solve here

  int n;
  cin >> n;
  int arr[n];
  for (auto& x : arr)
    cin >> x;

  int even = 0;
  int odd = 0;

  for (auto x : arr)
  {
    if (x % 2)
      odd++;
    else
      even++;
  }

  int ans;

  if (even > odd)
    ans = odd;
  else
    ans = even;

  if (even == 0 || odd == 0)
    std::cout << 0 << std::endl;
  else
    std::cout << ans << std::endl;

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
