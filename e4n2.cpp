// Experiment4 Problem no. 2 //

#include<iostream>

using namespace std;

int main(){
	int array_size;
	int num[array_size];
	int temp;
	
	
	cout << "Selection Sorting...." << endl;
	cout << "Enter the array size: "; 
	cin >> array_size;
	cout << "Enter the " < <array_size << " elements: ";
	
	for(int i=0; i<array_size; i++)
	{
		cin >> num[i];
	}
	
	for(int i=0; i<array_size-1; i++)
	{
		for(int j= i+1; j<array_size; j++)
		{
			if(num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	
	for(int i=0; i<array_size; i++)
	{
		cout << num[i] <<" ";
	}
}

