class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int m = matrix.size();
        int n = matrix[0].size();
        int a, b, c;
        a = 0;
        b = n-1;
        c = m-1;
        int flag = 0;
        while (result.size() < m*n) {
            int i = a;
            for (int j = a; j <= b; j++) {
                result.emplace_back(matrix[i][j]);
                if (result.size() == m*n) { flag = 1; break;}
            }
            if (flag == 1) break;
            int j = b;
            for (int i = a+1; i <= c; i++) {
                result.emplace_back(matrix[i][j]);
                if (result.size() == m*n) { flag = 1; break;}
            }
            if (flag == 1) break;
            i = c;
            for (int j = b-1; j >= a; j--) {
                result.emplace_back(matrix[i][j]);
                if (result.size() == m*n) { flag = 1; break;}
            }
            if (flag == 1) break;
            j = a;
            for (int i = c-1; i >= a+1; i--) {
                result.emplace_back(matrix[i][j]);
                if (result.size() == m*n) { flag = 1; break;}
            }
            if (flag == 1) break;
            a += 1;
            b -= 1;
            c -= 1;
        }

        return result;
    }
};