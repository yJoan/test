#include<iostream>
#include<Windows.h>
#include<string>

/*
int max_val(int a[],int size)
{
	int sum = 0;
	int max = 0;
	int i=0;

	while (i<size){
		sum+= a[i];
		i++;
			if(sum>max){
				max=sum;

			}else if(sum<max){
				sum=0;
			}
	}
	return max;
}
*/
using namespace std;

int main(void)
{
	int i;
	int x;
	int s=0;

	for(i=1;i<=100;i++){
		
		for(x=1;x<=i;x++){
			cout<<i<<endl;
			s++;
			if(s==100){
			goto happy;
		}
		}
	
	}



happy:
	cout<<"第"<<s<<"个数是"<<i<<endl;

	system("pause");
	return 0;

}
