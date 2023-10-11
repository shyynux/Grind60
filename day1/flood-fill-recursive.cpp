/* Problem Link = https://leetcode.com/problems/flood-fill/description/ */

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int r = image.size();
        int c = image[0].size();

        if(sr >= r || sc >= c)
            return image;

        int sourceColor = image[sr][sc];
        floodFillpixels(image, sr, sc, color, sourceColor);
        return image;
    }

    void floodFillpixels(vector<vector<int>>& image, int sr, int sc, int color, int sourceColor){
    int r = image.size();
    int c = image[0].size();

    if(sr >= r || sc >= c || sr < 0 || sc < 0)
        return;

    if (image[sr][sc] != sourceColor || image[sr][sc] == color)
        return;

    image[sr][sc] = color;

    /* top pixel */
    if((sr-1) >= 0){
        floodFillpixels(image, sr-1, sc, color, sourceColor);
    }

    /* bottom pixel */
    if((sr+1) < r){
        floodFillpixels(image, sr+1, sc, color, sourceColor);
    }

    /* left pixel */
    if((sc-1) >= 0){
        floodFillpixels(image, sr, sc-1, color, sourceColor);
    }

    /* right pixel */
    if((sc+1) < c){
        floodFillpixels(image, sr, sc+1, color, sourceColor);
    }
    }
};
