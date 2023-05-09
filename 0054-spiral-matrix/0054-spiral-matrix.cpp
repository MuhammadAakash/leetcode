class Solution {
private:
    vector<int> result;

    void oneSpiral(vector<vector<int>>& matrix, int r1, int r2, int c1, int c2) {
        if (r1 > r2 || c1 > c2) {
            return;
        }
        int dir = 0;
        vector<int> curr = {r1, c1}; // curr = {r, c}
        vector<vector<int>> limit = {{r1, c2}, {r2, c2}, {r2, c1}, {r1 + 1, c1}}, // boundaries
        dcurr = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}, {0, 0}}; // dcurr = {dr, dc} for directions {right, down, left, up, invalid}
        auto isValid = [&](int r, int c) { return r1 <= r && r <= r2 && c1 <= c && c <= c2; };
        while (dir < 4 && isValid(curr[0], curr[1])) {
            result.push_back(matrix[curr[0]][curr[1]]);
            if (curr == limit[dir]) { // change direction
                dir++;
            }
            curr = {curr[0] + dcurr[dir][0], curr[1] + dcurr[dir][1]}; // next cell
        }
        oneSpiral(matrix, r1 + 1, r2 - 1, c1 + 1, c2 - 1);
    }

public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        oneSpiral(matrix, 0, m - 1, 0, n - 1);
        result.resize(m * n); // to avoid duplicates
        return result;
    }
};