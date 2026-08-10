#include<iostream>
int gethammingDistance(unsigned int a, unsigned int b){
    return__builtin_popcount(a^b);
}
int main(){
    unsigned int sensorState1 = 0b10101100;
    unsigned int sensorState2 = 0b10111000;
    int disatance = getHammingDistance(sensorState1,sensorState2);
    std::cout<<"Sensor Hamming Distance:"<<distance<<std::endl;
    return 0 ;
}