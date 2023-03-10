  #include <bits/stdc++.h>
  using namespace std;

  int main()
  {

    int t;
    cin >> t;
    while (t--)
    {

      int k;
      cin >> k;
      string s;
      cin >> s;
      string fb2;
      for(int i=0;i<=2046;i++){
        if(i%3 == 0 && i%5!=0)fb2 += "F"; 
        else if(i%5==0 && i%3!=0) fb2 += "B";
        else if(i%3==0 && i%5==0) fb2 += "FB";
      }
      if(fb2.find(s)!=string :: npos) 
        cout<<"YES"<<endl;
      else
      cout << "NO" << endl;
    }
    return 0;
  }