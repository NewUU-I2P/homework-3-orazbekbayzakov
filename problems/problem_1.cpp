void problemSolution1(float consumed_water) {
    float cost = 13.0;
    // write your code here
    if(consumed_water <= 30.0){
        cost = cost + consumed_water * 0.4;
    }else if(consumed_water <= 50.0){
        cost = cost + 30.0 * 0.4 + (consumed_water - 30.0) * 0.12;
    }else if(consumed_water <= 60.0) {
        cost = cost + 30.0 * 0.4 + 20.0 * 0.12 + (consumed_water - 50.0) * 1.4;
    }else{
        cost = cost + 30.0 * 0.4 + 20.0 * 0.12 + 10.0 * 1.4 + (consumed_water - 60.0) * 1.5;
    }
}
