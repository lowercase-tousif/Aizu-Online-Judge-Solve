// Problem: Sorting Three Numbers
// Contest: Aizu Online Judge - ITP1 - ITP1_2_C
// URL: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_2_C
// Memory Limit: 131 MB
// Time Limit: 1000 ms
// Solved By : Tousif Tasrik
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;
 
// STL
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define endl "\n"
 
// STL OPERATION
#define pb push_back
#define eb emplace_back
 
/* CALCULATION */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
ll min(ll a, int b)
{
  if (a < b)
    return a;
  return b;
}
ll min(int a, ll b)
{
  if (a < b)
    return a;
  return b;
}
ll max(ll a, int b)
{
  if (a > b)
    return a;
  return b;
}
ll max(int a, ll b)
{
  if (a > b)
    return a;
  return b;
}
ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

string to_upper(string a)
{
  for (int i = 0; i < (int)a.size(); ++i)
    if (a[i] >= 'a' && a[i] <= 'z')
      a[i] -= 'a' - 'A';
  return a;
}

string to_lower(string a)
{
  for (int i = 0; i < (int)a.size(); ++i)
    if (a[i] >= 'A' && a[i] <= 'Z')
      a[i] += 'a' - 'A';
  return a;
}

bool prime(ll a)
{
  if (a == 1)
    return 0;
  for (int i = 2; i <= round(sqrt(a)); ++i)
    if (a % i == 0)
      return 0;
  return 1;
}
 
// YES OR NO
void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }
 
// TYPE CASTING
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
 
// SOLVE HERE
 
void solve()
{
	int n = 3;
		
	vi v;
	for(int i = 0; i < n; i++){
		int x;
		cin >> x;
		v.pb(x);
	}
	
	sort(v.begin(), v.begin() + 3);
	
	cout << v[0] << " " << v[1] << " " << v[2] << endl;
	
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  int t;
  t = 1;
  // cin >> t;
 
  for (int i = 1; i <= t; i++)
  {
 
    solve();
  }
}
