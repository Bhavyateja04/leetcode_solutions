class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        return (rec1[2] > rec2[0] &&   // right of rec1 > left of rec2
                rec2[2] > rec1[0] &&   // right of rec2 > left of rec1
                rec1[3] > rec2[1] &&   // top of rec1 > bottom of rec2
                rec2[3] > rec1[1]);    // top of rec2 > bottom of rec1
    }
};