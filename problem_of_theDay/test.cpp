#include <iostream>
#include <algorithm>

using namespace std;

int main() {
   string name = "alphabetX";
   int len = name.length();
   cout<<len<<endl;
   
   cout<<name[2]<<" ";
   cout<<name<<endl;
   
   name[2]=name[3];
   cout<<endl;
   cout<<name[2]<<" ";cout<<name;
   
   name[2]='X';
   cout<<endl;
   cout<<name[2]<<" ";cout<<name;
}
