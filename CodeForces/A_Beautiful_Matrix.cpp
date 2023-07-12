#include <bits/stdc++.h>
using namespace std;

int main()
{
  int arr[5][5];
  int count = 0; 

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      int item;
      cin >> item;
      arr[i][j] = item;

      if (item == 1)
      {
        if (j >= 2)
          count += j - 2;
        else
          count += 2 - j;

        if (i >= 2)
          count += i - 2;
        else
          count += 2 - i;
      }
    }
  }
  cout << count << endl; 
  return 0;
}
