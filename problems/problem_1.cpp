void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    if(consumed_water<=30){
        cost = 13.0+consumed_water*0.4;
    }else if(consumed_water>30.0){
        cost = 13.0+30*0.4;
        consumed_water -=30.0;
        if(consumed_water<=20.0){
            cost = cost+consumed_water*0.12;
        }else if(consumed_water>20.0){
            cost = cost+20.0*0.12;
            consumed_water -= 20.0;
            if(consumed_water<=10.0){
                cost = cost+consumed_water*1.4;
            }else{
                cost = cost+10.0*1.4;
                consumed_water -= 10.0;
                cost = cost+consumed_water*1.5;
            }
        }
    }
    return cost;
}
