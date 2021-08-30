// TODO: https://www.spoj.com/problems/GIVEAWAY/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;

#define FORE(i, a, b) for (ll i = a; i < b; i++)
#define FORI(i, a, b) for (ll i = a; i <= b; i++)

// INPUT
template <class T>
void read(T &x) { cin >> x; }

template <class T>
void read(vector<T> &a)
{
  FORE(i, 0, (ll)a.size())
  read(a[i]);
}

template <class Arg, class... Args>
void read(Arg &first, Args &...rest)
{
  read(first);
  read(rest...);
}

// Fast I/O
void setIO()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

int main()
{
  setIO(); // Disable this during interactive problems

  ll n, q, t, l, r, c;
  read(n);
  vll arr(n);
  read(arr);

  ll len = ceil(sqrt(n));

  vll b(len);

  FORE(i, 0, n)
    b[i / len] += arr[i];

  read(q);

  while (q--)
  {
    read(t, l, r);
    l--;

    if (t == 0)
    {
      r--;
      read(c);
      ll sum = 0, c_l = l / len, c_r = r / len;

      if (c_l == c_r)
      {
        FORI(i, l, r)
        {
          if (arr[i] >= c)
            sum++;
        }
      }
      else
      {
        ll end = (c_l + 1) * len - 1;
        FORI(i, l, end)
        {
          if (arr[i] >= c)
            sum++;
        }
        FORI(i, c_l + 1, c_r - 1)
        {
          if (b[i] >= c)
            sum++;
        }
        FORI(i, c_r * len, r)
        {
          if (arr[i] >= c)
            sum++;
        }
      }

      cout << sum << "\n";
    }
    else
    {
      ll prev = arr[l];
      b[l / len] += (r - prev);
      arr[l] = r;
    }
  }

  return 0;
}
