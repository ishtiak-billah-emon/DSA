
bool is_possible(int mid, vector<int> &stalls, int k) {

   int cow_count = 1;
   
   int last_pos = stalls[0];
   for(int i = 1; i < stalls.size(); i++) {
       if(stalls[i] - last_pos >= mid ){
           cow_count ++;
           if(cow_count == k){
               return true;
           }
           last_pos = stalls[i];
       }
   }

    return false;

}



int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.

    sort(stalls.begin(), stalls.end());

    int maximum = -1;

    for(int i = 0; i < stalls.size(); i++) {

            maximum = max(maximum, stalls[i]);
    }

  
    int l = 0, r = maximum, ans = -1;

    while(l <= r) {
        int mid = l + (r - l )/ 2;

        if(is_possible(mid, stalls, k)){

            ans = mid;
            l = mid + 1; 

        }else{
            r = mid - 1;
        }
    }

    return ans;
    
}