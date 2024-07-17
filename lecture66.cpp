

#include<iostream>
using namespace std;
int partition(int *arr, int start, int end)
{
	// This function places the start element in its correct position and returns this position value
	// First staep is to find the correect position of the start element
	// Finding all the elements which are less than the partition element
	
	int i, number_lessthan_part;
	for(i=start+1,number_lessthan_part=0;i<end+1;i++)
	{
		if(arr[i]<arr[start])
		{
			// This means that their element will be to the left of the partition element
			number_lessthan_index++;
		}
	}
	// now the actual index will just be :
	int correct_index;
	correct_index = start+number_lessthan_part;
	
	// I will simply swap the start element and the correct index element :
	int temp;
	// placing the start element in its actual position
	temp = arr[start];
	arr[start] = arr[correct_index];
	arr[correct_index] = temp;
	
	int j;
	i =start;
	j = end;
	while(i<correct_index && j>correct_index)
	{
		while(arr[i]>arr[correct_index])
		{
			i++;
		}
		while(arr[j]>arr[correct_index])
		{
			j--;
		}
		if(i<correct_index && j>correct_index)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	return correct_index;
}
void quicksort(int *arr, int start, int end)
{
	if(start>=end) return;
	// partition is the element which is at its "correct place " -->its position doesnt change even after we sort the numbers
	
	// First step is to find a partition such that its
	int partition_index;
	partition_index = partition(arr, start, end);
	// this function will return the actual position of the start element
	// Since after the function, I know that the start eement is placed in its "correct" position and we know that position through partition_index , we dont need to change position of index
    quickSort(arr,start,partition_index-1);
    quickSort(arr,partition_index,end);
}
int main()
{
	int size;
	int arr[7] = {5,1,3,10,7,14,2};
	size = 7;0
	quicksort(arr,0,size-1);
	
	int k;
	for(k=0;k<size;k++)
	{
		cout << arr[k]<<" ";
		return 0;
	}
}
