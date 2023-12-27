#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
string convert(string x);
void RPS(string,string);
int main()
  {
    string user,y;
    int choice=1;
    while(choice!=0)
     {
       cout<<"1 for start and 0 for terminate\n";
       cin>>choice;
       cout<<"Enter the Rock,paper and scissors:";
       cin>>y;
       user=convert(y);
       srand(time(0));
       string game[3]={"rock","paper","scissors"};
       string result=game[rand()%3];
       cout<<result<<"\n";
       RPS(user,result);
     }
    return 0;
  }
void RPS(string user,string result)
  {
   if(user==result)
     {
        cout<<"same\n";
     }
     else if (user=="rock" && result=="scissors")
     {
        cout<<"User win\n";
     }
     else if (user=="paper"&& result=="rock")
     {
        cout<<"User win\n";
     }
     else if (user=="scissors" && result=="paper")
     {
        cout<<"User win\n";
     }
     else if (user=="scissors" && result=="rock")
     {
        cout<<"you win\n";
     }
     else if (user=="rock" && result=="paper")
     {
        cout<<"you win\n";
     }else if (user=="paper" && result=="scissors")
     {
        cout<<"you win\n";
     }
     else
     {
        cout<<"Error\n";
     }
  }
/*Converting user string to lowercase*/
string convert(string x)
  {
   transform(x.begin(),x.end(),x.begin(),::tolower);
   return x;
  }