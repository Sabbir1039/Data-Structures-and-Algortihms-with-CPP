#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
	for (int i=0; i<size; i++)
	{
		cout << arr[i] << " " ;
	}
}

void addArrayElement(int arr[], int &size, int item)
{
	arr[size] = item;
	size++;
}

void addArrayElementAtNth(int arr[], int &size, int item, int pos)
{
	if (pos > size || pos < 0)
	{
		cout<<"Invalid position"<<endl;
		return;
	}
	if (pos == size)
	{
		arr[size] = item;
		size++;
		return;
	}
	size++;
	for (int i=size; i>pos; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[pos] = item;
	return;
}

int main()
{
	int *arr = new int[10] {};
	int size = 0;

	addArrayElement(arr, size, 6);
	addArrayElementAtNth(arr, size, 1, 0);
	addArrayElementAtNth(arr, size, 10, 2);
	printArray(arr, size);

	delete[] arr;
	return 0;
}