#include<iostream>
#include<stdio.h>
using namespace std;

int main (void)
{
	int num;
	cin>>num;
	
	int num_cifras = 1;
	while(num >= 10){
		num = num/10;
		num_cifras ++;
	}
	cout<<"cifras: "<<num_cifras;
	
}
