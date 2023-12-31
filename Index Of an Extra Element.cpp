/*
Given two sorted arrays of distinct elements.
 There is only 1 difference between the arrays.
  First array has one element extra added in between.
   Find the index of the extra element.
*/


#include <bits/stdc++.h>
using namespace std;


class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        for(int i = 0 ; i< n-1;i++){
            if(a[i]!=b[i]){
                return i;
            }
        }
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}


/*
Input:
t=1
N = 7
A[] = {2,4,6,8,9,10,12}
B[] = {2,4,6,8,10,12}
Output: 4
Explanation: In the second array, 9 is
missing and it's index in the first array
is 4.
*/
