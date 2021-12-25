#include<iostream>
#include <fstream>
using namespace std;
main()
{
int arr[10];
for(int i=0; i<10; i++)
	arr[0]=i+1;

ofstream obj("data.dat", ios::binary);
obj.write(reinterpret_cast<char*>(arr),10*sizeof(int));
obj.close();

for(int i=0; i<10; i++)
	arr[0]=0;

ifstream obji("data.dat", ios::binary);
obji.read(reinterpret_cast<char*>(arr),10*sizeof(int));

for(int i=0; i<10; i++)
	if(arr[0]=i+1)
	cout<<"correct:";
}
