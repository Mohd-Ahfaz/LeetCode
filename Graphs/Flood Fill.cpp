class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc]== color){
            return image;
        }
        int row = image.size();
        int col = image[0].size();
        int source = image[sr][sc];
        dfs(image, sr, sc, color, row, col, source);
        return image;
    }
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int row, int col, int source){
        if(sr < 0 || sr >= row || sc < 0 || sc >= col){
            return;
        }
        else if(image[sr][sc] != source){
            return;
        }   
        image[sr][sc] = color;
        dfs(image, sr + 1, sc, color, row, col, source);
        dfs(image, sr - 1, sc, color, row, col, source);
        dfs(image, sr, sc + 1, color, row, col, source);
        dfs(image, sr, sc - 1, color, row, col, source);            
    }
};
