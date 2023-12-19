class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        // Get the dimensions of the Image vector
        int m = img.size(); // number of Rows
        int n = img[0].size(); // number of Columns
        
        // new vector to store the smoothImgae
        vector<vector<int>> smoothImg(m, vector<int>(n));
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                int sum = 0;
                int count = 0;
                
                // Iterate through the 3*3 neighborhood centered at the current pixel
                for(int x = i - 1; x<= i + 1; x++) {
                    for(int y = j -1; y <= j + 1; y++) {
                        
                        // checking if the neighboring pixel is within the Image
                        
                        if(0 <=x && x < m && 0 <= y && y < n) {
                            sum += img[x][y];
                            count += 1;
                        }
                    }
                }
                
                smoothImg[i][j] = sum / count;
            }
        }
        return smoothImg;
    }
};