void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    float fixed_cost = 13.0;
    if(consumed_water<=30){
        cost = fixed_cost+consumed_water*0.4;
    }else if(consumed_water>30){
        cost = fixed_cost+30*0.4;
        consumed_water -=30;
        if(consumed_water<=20){
            cost = cost+consumed_water*0.12;
        }else if(consumed_water>20){
            cost = cost+20*0.12;
            consumed_water -= 20;
            if(consumed_water<=10){
                cost = cost+consumed_water*1.4;
            }else{
                cost = cost+10*1.4;
                consumed_water -= 10;
                cost = cost+consumed_water*1.5;
            }
        }
    }
    return cost;
}
