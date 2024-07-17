#include<iostream>
using namespace std;

void simplesearch(int *arr,int l,int r,int val){
	int i;
	
	
	for(i=l;i<r+1;i++){
		if(arr[i]==val){
			cout<<"congrats your value is present in the array"<<endl;
			return;
		}
	}
	cout<<"sad bro, the value is not present"<<endl;
	return;
}

int binarysearch(int *arr,int l,int r,int val){
	int middle;
	middle=l+(r-l)/2;
	
	if(r>=l){
		
		if(arr[middle]==val){
			return 1;
		
	}
		else if(arr[middle]>val){
			binarysearch(arr,l,middle-1,val);
	}
		else{
			binarysearch(arr,middle+1,r,val);
	}
	return -1;
		
	}
	

}
int main(){
	int arr[7]={1,3,10,2,4,7,5};
	int size=7;
	simplesearch(arr,0,6,13); //13 is not present
	simplesearch(arr,0,6,10);
	
	if(binarysearch(arr,0,6,10)==1){
		cout<<"value is present";
	}
	return 0;
	
	
}
