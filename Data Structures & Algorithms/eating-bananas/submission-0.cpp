class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // if you have h hours to finish the array, 
        // there must be at most h elements because 
        // you can't eat more than one element at a time

        // given this, you can take the maximum element 
        // and use that as the maximum limit - we now need to 
        // find the minimum that will fit ; search b/w 1 and max

        int l = 1, r = *max_element(piles.begin(), piles.end());
        while(l < r)
        {
            int time = 0;
            int speed = (l + r)/2;

            for(int i = 0 ; i < piles.size() ; i++)
                time += (int)ceil((double)piles[i]/speed);
            
            if(time > h)
                l = speed + 1;
            else if(time <= h)
                r = speed;
        }

        return l;
    }
};
