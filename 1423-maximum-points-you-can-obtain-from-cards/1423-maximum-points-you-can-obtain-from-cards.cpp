class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n =cardPoints.size();
        int left=0;
        int maxi=INT_MIN;
        for(int i=0;i<k;i++){
            left+=cardPoints[i];
        }
        maxi=left;
        int right=0;
        int f=n-1;
        for(int j=k-1;j>=0;j--){
            left=left-cardPoints[j];
            right+=cardPoints[f];
            f--;
            maxi=max(maxi,left+right);
        }
        return maxi;
    }
};