#include <iostream>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a1[n];
	int a2[n];
	int b1[n];
	int b2[n];
	int zbir=0,zbir1=0,zbir2=0;
	for(int i =0;i<n;i++){
		cin>>a1[i];
	}
	for(int i =0;i<n;i++){
		cin>>a2[i];
	}
	for(int i =0;i<n;i++){
		b1[i]=a1[i];
		b2[i]=a2[i];
	}
	for(int i =0;i<n;i++){
		int a=0;
		a=a1[i];
	zbir1=zbir1+a;
	zbir2=zbir2+a2[i];
	}
	zbir=(zbir1+zbir2)/(n*2);
	zbir1=zbir1/n;
	zbir2=zbir2/n;
	
	for(int i = 0;i<n;i++){
		if(a1[i]>zbir1){
			b1[i]++;
		}
	}
	for(int i = 0;i<n;i++){
		if(a2[i]>zbir2){
			b2[i]++;
		}
	}
	for(int i = 0;i<n;i++){
		if(a2[i]>zbir){
			b2[i]++;
		}
		if(a1[i]>zbir){
			b1[i]++;
		}
	}
	cout<<endl;
	for(int i =0;i<n;i++){
		cout<<b1[i]<<endl;
	}
	for(int i =0;i<n;i++){
		cout<<b2[i]<<endl;
	}
}
