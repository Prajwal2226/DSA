//https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

#include <bits/stdc++.h>
using namespace std;


bool isPossible(int pages[], int n, int m, int numPages) {
    int cntStudents = 1;
    int curSum = 0;
    for (int i = 0; i < n; i++) {
        if (pages[i] > numPages) {
            return false;
        }
        if (curSum + pages[i] > numPages) {
        
            cntStudents += 1;
            
            curSum = pages[i];
            
            if (cntStudents > m) {
                return false;
            }
        } else {
            curSum += pages[i];
        }
    }
    return true;
}
int allocateBooks(int pages[], int n, int m) {
    if (n < m) {
        return -1;
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += pages[i];
    }
    
    for (int numPages = 1; numPages <= sum; numPages++) {
        if (isPossible(pages, n, m, numPages)) {
            return numPages;
        }
    }
    return -1;
}
int main() {
    
    int n,m ; 
    cout << "Enter n: "; 
	cin >> n;
	 
    cout << "Enter m: "; 
	cin >> m; 
	int pages[n]; 

    for (int i = 0; i < n; i++) { 
        cout << "Enter a number: "; 
        cin >> pages[i]; 
    }
    cout << "The minimum value of the maximum number of pages in book allocation is: " << allocateBooks(pages, n, m) << endl;
}
