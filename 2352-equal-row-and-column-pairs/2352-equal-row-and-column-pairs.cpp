struct RowOrColumn {
  const vector<vector<int>>& grid;
  const bool is_row;
  const int offset;

  // This data behaves as if it is a vector for reading.
  int operator[](int index) const {
    return is_row ? grid[offset][index] : grid[index][offset];
  }

  bool operator==(const RowOrColumn& other) const {
    // We skip the size equality since here it's always the same.
    for (int i = 0; i < size(); ++i) {
      if ((*this)[i] != other[i]) {
        return false;
      }
    }
    return true;
  }

  int size() const {
    return grid.size();  // Row and column size should be the same.
  }
};

struct RangeHash {
  int operator()(const RowOrColumn& v) const {
    uint hash = 0;
    for(int i = 0; i < v.size(); ++i) {
        hash ^= v[i] + 0x9e3779b9 + (hash << 6) + (hash >> 2);
    }
    return hash;
  }
};

class Solution {
public:
  int equalPairs(vector<vector<int>>& grid) {
    const int N = grid.size();
    unordered_map<RowOrColumn, int, RangeHash> counts;
    for (int c = 0; c < N; ++c) {
      ++counts[RowOrColumn{.grid = grid, .is_row = false, .offset = c}];
    }
    int answer = 0;
    for (int r = 0; r < N; ++r) {
      answer += counts[RowOrColumn{.grid = grid, .is_row = true, .offset = r}];
    }
    return answer;
  }
};