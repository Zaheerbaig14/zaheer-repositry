#include<iostream>
using namespace std;
main()
{
 string name;
  cout<<"Enter name:";
  cin>>name;
 float matric;
  cout<<"Enter matric marks:";
  cin>>matric;
 float inter;
  cout<<"Enter inter marks:";
  cin>>inter;
 float ecat;
  cout<<"Enter ecat marks:";
  cin>>ecat;
 float matricinter;
  matricinter = (matric/1100 * 10) + (inter/550 * 40);
 float ecatagg;
  ecatagg = (ecat/400 * 50);
 float total;
  total = matricinter + ecatagg;
  cout<<"your agregate is : " <<total<<endl;

}