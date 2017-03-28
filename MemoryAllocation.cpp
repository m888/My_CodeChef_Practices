#include<iostream>
using namespace std;
int main(){
int i,j;
int *p;
cout<<"how many numbers you want to enter:?"<<endl;
cin>>i;
p=new int[i];
if(p==0){
	cout<<"memory could not be allocated."<<endl;
}
else 
{
	for(j=0;j<i;j++){
		cout<<"enter number "<<j<<" : ";
		cin>>p[j];
	}
	cout<<"you have entered : "<<endl;
	for (j=0;j<i;j++){
		cout<<"  "<<p[j]<<"  "<<endl;	}
	delete[] p;//after delete [] when these brackets are used then it will delete the whole array of the memory allocated
	//	for (j=0;j<i;j++)//after deleteing the memory this for loop will give garbage values
	//	cout<<"  "<<p[j]<<" "<<endl;
	
}
}
