#include <iostream>
#include <vector>
using namespace std;

// Function to count elements <= mid in a row and column sorted matrix
int countLessEqual(vector<vector<int>> &matrix, int mid) {
    int n = matrix.size();
    int count = 0, row = n - 1, col = 0;

    // Start from the bottom-left corner
    while (row >= 0 && col < n) {
        if (matrix[row][col] <= mid) {
            count += (row + 1); // All elements in this column up to the current row are <= mid
            col++;              // Move to the next column
        } else {
            row--;              // Move up in the current column
        }
    }
    return count;
}

// Function to find the kth smallest element in the matrix
int kthSmallest(vector<vector<int>> &matrix, int k) {
    int n = matrix.size();
    if (n == 0 || k <= 0 || k > n * n) return -1;

    int low = matrix[0][0];
    int high = matrix[n - 1][n - 1];

    while (low < high) {
        int mid = low + (high - low) / 2;
        int count = countLessEqual(matrix, mid);

        if (count < k) {
            low = mid + 1; // Increase the lower bound
        } else {
            high = mid;    // Decrease the upper bound
        }
    }

    return low;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}
    };

    int k = 8; // Find the 8th smallest element

    cout << "The " << k << "th smallest element is: " << kthSmallest(matrix, k) << endl;

    return 0;
}
