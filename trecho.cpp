#include<bits/stdc++.h>


using namespace std;

int main (){

int i =0;
int not_per_day =0, notify_per_day=0;
double notify_times[20], current_hour;

cin >> notify_per_day;

    double div = 16/double(notify_per_day);

    notify_times[0] = div + 6;

    for (i=1; i < notify_per_day; i++){
        current_hour += (notify_times[i-1] + div);

        notify_times[i] = current_hour;
        current_hour =0;
    }


    for (int i=0; i< notify_per_day; i++){
        printf("%lf ", notify_times[i]);
    }


}