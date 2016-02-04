#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
  int i,j;


  for(i=1;i<6;i++)
  {
      cout<<setw(7)<<i;
  }
  cout<<endl;

  for(i=1;i<6;i++)
  {
      cout<<"  "<<setw(8);
  }
  cout<<endl;

  for(i=1;i<6;i++)
  {
       for(int j=1;j<6;j++)
  {
      if(j==1) cout<<setw(7)<<" +-------+";
      else cout<<"-------+";

  }
      cout<<endl;

      cout<<i;


      for(j=1;j<6;j++)
      {
         cout<<"|"<<setw(7)<<(i*j)<<"";

      }
      cout<<"|";
      cout<<endl;

  cout<<endl;

  }


return 0;
}

