#include <iostream>
using namespace std;
int main()
{
int i,j,k;
cout<<"enter your pattern";
cin>>k;
for(i=1;i<=7;i++)
{
for(j=1;j<=i;j++)
{
cout<<"*";
}
cout<<endl;
}



for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
cout<<"*";
}
cout<<endl;
}


for(i=k;i>=1;i--)
{
for(j=1;j<=i;j++)
{
cout<<"*";
}
cout<<endl;
}
return 0;
}
