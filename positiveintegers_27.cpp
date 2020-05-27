// C++ implementation to find the 
// Largest element before every element 
// of an array such that 
// it is less than the element 

#include <bits/stdc++.h> 
using namespace std; 
 
void findMaximumBefore(int arr[], 
						int n){ 
	
	
	for (int i = 0; i < n; i++) { 

		int currAns = -1; 
		
		for (int j = i - 1; j >= 0; j--) { 
			if (arr[j] > currAns && 
				arr[j] < arr[i]) { 
				currAns = arr[j]; 
			} 
		} 
		cout << currAns << " "; 
	} 
} 


int main() 
{ 
	int arr[] = { 4, 7, 6, 8, 5 }; 

	int n = sizeof(arr) / sizeof(arr[0]); 

	// Function Call 
	findMaximumBefore(arr, n); 
} 
