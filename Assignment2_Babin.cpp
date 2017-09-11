/*
Programmer: Conor Babin
9/6/17 1:27 PM
Program provides the user the ability
to find statistical values of a given array
Input: a set of double values to populate the array
Output: statistical values of the given array
*/
#include <cstdlib>
#include <iostream>

using namespace std;

double min(double arr[], int length);
double max(double arr[], int length);
double mean(double arr[], int length);
double median(double arr[], int length);
void sort(double arr[], int length);
void readArray(double arr[], int length);
void printArray(double arr[], int length);
int main(int argc, char** argv) {
	int length = 0;
	cout << "Enter the size of your array: ";
        cin >> length;
        double arr[length];
        readArray(arr, length);
	cout << "Entered elements: ";
	printArray(arr, length);
	cout << endl;
	cout << "Elements in sorted ascending order: ";
	sort(arr, length);
	printArray(arr, length);
	cout << endl;
	cout << "Min: ";
	cout << min(arr, length) << endl;
	cout << "Max: ";
	cout << max(arr, length) << endl;
	cout << "Mean: ";
	cout << mean(arr, length) << endl;
	cout << "Median: ";
	cout << median(arr, length) << endl;
	return 0;
}
//Finds the smallest number in the array
//inputs: double array and the length of that array
//outputs: smallest element
double min(double arr[], int length){
	sort(arr, length);
	return arr[0];
}
//Finds the largest number in the array
//inputs: double array and the length of that array
//outputs: largest element

double max(double arr[], int length){ 
	sort(arr, length);
	return arr[length - 1];
}
//Finds the mean of the array
//inputs: double array and the length of that array
//outputs: mean of the array

double mean(double arr[], int length){
	int i = 0;
	double sum = 0;
	while(i < length){
		sum = sum + arr[i];
		i++;
	}
	return sum / length;
}
//Finds the median of the array
//inputs: double array and the length of that array
//outputs: median of the array

double median(double arr[], int length){
	int i = 0;
	sort(arr, length);
	return arr[length / 2];
}
//Sorts the list in ascending order using insertion sort
//inputs: array and the length of that array
void sort(double arr[], int length){
	int i = 1;
	int j = 0;
	int temp = 0;
	while(i < length){
		j = i;
		while(j > 0 && arr[j - 1] > arr[j]){
			temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;	
		}
		i++;
	}
}
//Outputs the values of the array in the console
//inputs: array and the length of that array
void printArray(double arr[], int length){
	int i = 0;
	while(i < length){
		cout << arr[i] << " ";
		i++;
	}
}
//Prompts the user to populate the array
//inputs: array and the length of that array
void readArray(double arr[], int length){
	//TODO add file IO
	cout << "Enter " << length << " elements to populate the array" << endl;
	int i = 0;
	while(i < length){
		cin >> arr[i];
		i++;
	}
}




