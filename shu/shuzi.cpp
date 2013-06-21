#include<iostream>
using namespace std;

main()
{
int i,j,n=4;
for(i=1;i<=4;i++)
{
	for(j=1;j<=n-i;j++)
	  cout << " " ;
	for(j=1;j<=2*i-1;j++)
	  cout << "*";
   	  cout << endl;
}
for(i=1;i<=n-1;i++)
{
   for(j=1;j<=i;j++)
      cout << " " ;
   for(j=1;j<=7-2*i;j++)
      cout << "*";
   	  cout << endl;
}
//xiaosong
}
