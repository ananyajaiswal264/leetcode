class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int i=0;
        int z=0,o=0;
        while(i<n){
            if(bills[i]==5) z++;
            else if(bills[i]==10){
                if(z<=0) return false;
                o++;
                z--;

            }
            else {
                if(o>0 && z>0) {
                    o--;
                    z--;
                }
                else if(z>=3) {
                    z-=3;
                }
                else return false;
            }
            i++;

        }
        return true;
        
    }
};