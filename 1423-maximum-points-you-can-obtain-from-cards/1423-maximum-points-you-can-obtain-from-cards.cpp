class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int left=0;
        int right=0;
        for(int i=0;i<k;i++) left+=cardPoints[i];
        int maxi=left;
        int ridx=n-1;

        for(int i=k-1;i>=0;i--){
            left-=cardPoints[i];
            right+=cardPoints[ridx];
            ridx--;
            maxi=max(maxi,left+right);

        }
        return maxi;


        
    }
};