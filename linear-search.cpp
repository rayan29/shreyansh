#include<iostream>
using namespace std;
int main()
{
	int n ,key , a[99],flag =0;
	cin >> n;
	for(int i=0 ;i<n;i++) cin >> a[i];
	cin >> key;
	for(int i=0 ;i<n;i++)
		if(key==a[i]) flag++;
	
	(flag==1) ? cout << "present \n" :cout <<  "absent \n";
}
