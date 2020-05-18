#include <bits/stdc++.h>
using namespace std;

void findTriplet(int arr[], int n)
{
     
    sort(arr, arr + n);
 
   
    for (int i = n - 1; i >= 0; i--) {
        int j = 0;
        int k = i - 1;
 
       
        while (j < k) {
 
           
            if (arr[i] == arr[j] + arr[k]) {
 
               
                cout << "numbers are " << arr[i] << " "
                     << arr[j] << " " << arr[k] << endl;
                return;
            }
 
           
            else if (arr[i] > arr[j] + arr[k])
                j += 1;
 
           
            else
                k -= 1;
        }
    }
 
   
    cout << "No such triplet exists";
}
 

int main()
{
    int arr[] = { 5, 32, 1, 7, 10, 50, 19, 21, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findTriplet(arr, n);
    return 0;
}
