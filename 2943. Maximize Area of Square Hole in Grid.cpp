class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());
        int maxHBars = 1;
        int currentHBars = 1;


        for(int i=0; i < hBars.size()-1; i++){
            if(hBars[i] +1 == hBars[i+1]){
                currentHBars ++;
            }else{
                currentHBars = 1;
            }
            maxHBars = max(maxHBars, currentHBars);
        }

        int maxVBars = 1;
        int currentVBars = 1;


        for(int i=0; i < vBars.size()-1; i++){
            if(vBars[i] +1 == vBars[i+1]){
                currentVBars ++;
            }else{
                currentVBars = 1;
            }
            maxVBars = max(maxVBars, currentVBars);
        }

        int side = min(maxVBars, maxHBars)+1;
        return side*side;


    }
};