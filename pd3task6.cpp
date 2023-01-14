#include<iostream>
using namespace std;
main()
{
 float bagsize;
  cout<<"Enter bag size in pond:";
  cin>>bagsize;
 float bagcost;
  cout<<"Enter bag cost : ";
  cin>>bagcost;
 float areasqure;
  cout<<"Enter area in squre feet : ";
  cin>>areasqure;
 float costperpond;
  costperpond = bagcost/bagsize;
  cout<<"your cost per pond is :"<<costperpond<<endl;
 float costpersqure;
  costpersqure = bagcost/ areasqure;
  cout<<"your cost per squre  is :"<<costpersqure<<endl;
     


}