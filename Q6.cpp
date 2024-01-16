// A simple program to count pairs with difference k
//https://leetcode.com/problems/k-diff-pairs-in-an-array/

#include <iostream>
using namespace std;

int countPairsWithDiffK(int arr[], int n, int k)
{
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++)
			if (arr[i] - arr[j] == k
				|| arr[j] - arr[i] == k)
				count++;
	}
	return count;
}
int main()
{
    int n,k ; 
    cout << "Enter a size: "; 
	cin >> n;
	 
    cout << "Enter k: "; 
	cin >> k; 
	int arr[n]; 

    for (int i = 0; i < n; i++) { 
        cout << "Enter a number: "; 
        cin >> arr[i]; 
    }
    cout << "Count of pairs with given diff is "
		<< countPairsWithDiffK(arr, n, k);
	return 0;
}
