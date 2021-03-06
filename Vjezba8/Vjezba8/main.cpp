#include"timer.h"
#include<iostream>
#include<vector>



using namespace std;

int main() {
    vector<Timer> v{ {2, 6, 9.118}, {2, 6, 15.251}, {2, 6, 9.925}, {2, 7, 15.222}, {2, 7, 10.775} };

    // prosjecno vrijeme
    Timer avg;
    for (auto t : v)
        avg += t;
    avg /= v.size();
    cout << "avg " << avg << endl;

    // vrijeme najbrzeg (operator<)
    Timer tmax = *min_element(v.begin(), v.end());
    cout << "min " << tmax << endl;

    // zaostajanje za vodecim u sekundama
    for (auto& tm : v)
       cout << double(tm - tmax) << endl;

    // penaliziranje vozaca s m sekundi (funkcijski objekt)
   penalty p(5);
   for (auto& tm : v)
     p(tm);


 return 0;
}