// Hi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int maxm( int arr[5]) {
	int max = arr[0];


	for (int i = 0; i < 5 ; i++)
		if (arr[i] > max){
			max =arr[i];
}

			return max;


}

int minm(int arr[5]) {
	int min = arr[0];


	for (int i = 0; i < 5; i++)
		if (arr[i] < min) {
			min = arr[i];
		}

	return min;


}


int main()
{
	int arr[5];

	cout << "Entre 5 numbers please ." << endl;

	for (int i = 0; i < 5; i++)
		cin >> arr[i];
 
	cout << "___________________" << endl;

	cout << "  " << endl;


	cout << "The Maximum number is  " << maxm(arr) << endl;

	cout << "___________________" << endl;

	cout << "  " << endl;


cout << "The Minmum number is  " << minm(arr) << endl;

cout << "___________________" << endl;

cout << "  " << endl;
	
cout << "MADE BY MOSTAFA" << endl;
	return 0;

}
