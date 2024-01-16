// https://practice.geeksforgeeks.org/problems/maximum-average-subarray5859/1?ref=header_search

// C++ program to find maximum average subarray
// of given length.
#include<bits/stdc++.h>
using namespace std;

int findMaxAverage(int arr[], int n, int k)
{
	if (k > n)
		return -1;

	int *csum = new int[n];
	csum[0] = arr[0];
	for (int i=1; i<n; i++)
	csum[i] = csum[i-1] + arr[i];

	int max_sum = csum[k-1], max_end = k-1;

	for (int i=k; i<n; i++)
	{
		int curr_sum = csum[i] - csum[i-k];
		if (curr_sum > max_sum)
		{
			max_sum = curr_sum;
			max_end = i;
		}
	}

	delete [] csum; 
	return max_end - k + 1;
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
	cout << "The maximum average subarray of "
		"length "<< k << " begins at index "
		<< findMaxAverage(arr, n, k);
	return 0;
}
