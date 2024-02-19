#include <bits/stdc++.h>
using namespace std;
int main()
{  
  int *a =new int[3];
  int *b = new int[3];
for (int i = 0; i < 3; i++)
{
  cin>>a[i];
  b[i]=a[i];
}

for (int i = 0; i < 3; i++)
{
  cout<<a[i]<<" ";
  
}
cout<<endl;

  delete[] a; //syntax of array delete
//check for delete done or not
  for (int i = 0; i < 3; i++)
{
  cout<<a[i]<< " ";
}
cout<<endl;
//second time gives output garbage value
//so array deleted
//delete hoyece dynamic memory te array so pointer ta to ace ore kaje lagano jabe
//but size increase er joinno ager value gula lagbe tai b[i] new array niye er moddhe rekhe dilam a delete holeo b to delete korini..
//pore abar array size 5 niye er moddhe b[i] er value a[i] te rakle inrecase kora array te value rakha hobe.....then increase er porer value gula alada vabe rakhlei problem ses

a =new int [5];
for (int i = 0; i < 3; i++)
{
  a[i]=b[i];
}
delete[] b; //etao ekhn shudhu shudhu memory nosto korbe so delete kore dilam

a[3]=40;
a[4]=50;

//increase kora value o put kora hoilo ekhn print korlei hoy
for (int i = 0; i < 5; i++)
{
  cout<<a[i]<<" ";

}
  

    
  return 0;
}
