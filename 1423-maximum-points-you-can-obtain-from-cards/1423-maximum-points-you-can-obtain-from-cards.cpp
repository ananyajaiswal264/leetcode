class Solution {
public:
    int maxScore(vector<int>& points, int k) {
        int n =points.size();
        int left =0;
        for(int i=0;i<k;i++){
            left+=points[i];
        }
        int maxi=left;
        int right=0;
        int j=n-1;
        for(int i=k-1;i>=0;i--){
            left=left-points[i]; 
            right+=points[j];
            j--;
            maxi=max(maxi,left+right);
        }
        return maxi;
        
    }
};