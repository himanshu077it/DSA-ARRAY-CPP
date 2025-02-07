#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
      vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
          // Step 1: Flatten the 2D matrix into a 1D vector
          vector<int> matrix;
          for (int i = 0; i < N; i++) {
              for (int j = 0; j < N; j++) {
                  matrix.push_back(Mat[i][j]);
              }
          }
  
          sort(matrix.begin(), matrix.end());
  
          int idx = 0; // Index for the sorted 1D vector
          for (int i = 0; i < N; i++) {
              for (int j = 0; j < N; j++) {
                  Mat[i][j] = matrix[idx++];
              }
          }
  
          return Mat;
        }
    };

int main() {
            int t;
            cin >> t;
            while (t--) {
                int N;
                cin >> N;
                vector<vector<int>> v(N, vector<int>(N));
                for (int i = 0; i < N; i++)
                    for (int j = 0; j < N; j++) cin >> v[i][j];
                Solution ob;
                v = ob.sortedMatrix(N, v);
                for (int i = 0; i < N; i++) {
                    for (int j = 0; j < N; j++) cout << v[i][j] << " ";
                    cout << "\n";
                }
            
        cout << "~" << "\n";
        }
        }