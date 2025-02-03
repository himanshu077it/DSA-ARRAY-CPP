#include <bits/stdc++.h>
using namespace std;

vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    vector<int> ans;
    int i = n - 1, j = m - 1, carry = 0;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) sum += a[i--]; 
        if (j >= 0) sum += b[j--];

        ans.push_back(sum % 10);   
        carry = sum / 10;          
    }

    reverse(ans.begin(), ans.end()); 
    return ans;
}

int main() {
    vector<int> a = {9, 9, 9}; 
    vector<int> b = {1};      
    vector<int> result = findArraySum(a, a.size(), b, b.size());

    for (int digit : result) {
        cout << digit;
    }
    cout << endl;

    return 0;
}
