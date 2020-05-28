
#include <bits/stdc++.h> 
#define ll long long int 
using namespace std; 
  
ll count(ll arr[], ll n) 
{ 
    ll unique = 0; 
  

    ll i = -1, j = 0; 
  
    
    unordered_map<ll, ll> freq; 
    for (j = 0; j < n; j++) { 
        freq[arr[j]]++; 
  
        if (freq[arr[j]] >= 2) { 
            i++; 
            while (arr[i] != arr[j]) { 
                freq[arr[i]]--; 
                i++; 
            } 
            freq[arr[i]]--; 
            unique = unique + (j - i); 
        } 
        else
            unique = unique + (j - i); 
    } 
  
    ll total = n * (n + 1) / 2; 
  
    return total - unique; 
} 
  
int main() 
{ 
    ll arr[] = { 4, 3, 4, 3 }; 
    ll n = sizeof(arr) / sizeof(arr[0]); 
    cout << count(arr, n) << endl; 
    return 0; 
} 