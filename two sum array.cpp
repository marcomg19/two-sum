#include <iostream>
using namespace std;
int main()
{

int array [8]={7,13,50,8,3,8,11,455};
for(int a=0;a<8;a++)
{
    cout<<array[a]<<" ";
}
cout<<endl;
cout<<"la suma de sus posiciones es "<<endl;
cout<<array[2]+array[6];
return 0;
}
