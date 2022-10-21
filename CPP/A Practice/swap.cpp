#include <bits/stdc++.h>
using namespace std;
// Classes and Functions Here


int getbit() {
  int bit;

  return bit;
}


void Revnum(int n)
{
  if (n < 10)
  {
    if (n == 0)
      return;
    // else
    // {
    //   cout << n;
    //   return;
    // }
  }

  cout << n % 10;
  Revnum(n / 10);

}

bool isEven(int n)
{
  int ans = n & 1;
  return !ans;
}


void solve()
{
  //Solve here

  int ans;


  cin >> ans;

  Revnum(ans);

  cout << endl;
}






int main()
{


  return 0;
}