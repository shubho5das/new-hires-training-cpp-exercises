#include<iostream>
using namespace std;

bool check_if_power_of_2(int num){
    int cnt_set_bit = 0;
    while(num){
        int current_bit = num&1;
        if (current_bit == 1){
            cnt_set_bit++;
        }
        num >>= 1;
    }

    return (cnt_set_bit == 1);
}

int main(){
    int num;

    cout<<"Enter a positive integer: ";
    cin>>num;

    check_if_power_of_2(num)? cout<<"Yes" : cout<<"No";

    return 0;
}