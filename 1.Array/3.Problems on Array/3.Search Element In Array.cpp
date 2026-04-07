int searchElementInArray(vector<int>& nums, int target) {
    // Implement the logic to search for an element in the array

    int size = nums.size();

    for(int i =0 ; i < size ; i++){
        int value = nums[i];
        if(value == target){
            // if target found thenreturn index :
            return i;
        }
    }
        // agar mai line 13 tak agya means mai loop se baahr hu.
        // iska matlab , loop me target nahi mila 
        // iska matlab array me target nahi mila
        // iska matlab not-found


    return -1; // Placeholder return

}
