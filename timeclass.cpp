#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h = 0, int m = 0, int s = 0)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void display()
    {
        cout << "Time: " << hours << " hours " << minutes << " minutes " << seconds << " seconds" << endl;
    }

    Time addTime(const Time &t2)
    {
        Time sum;
        sum.hours = hours + t2.hours;
        sum.minutes = minutes + t2.minutes;
        sum.seconds = seconds + t2.seconds;

        if (sum.seconds >= 60)
        {
            sum.minutes += sum.seconds / 60;
            sum.seconds %= 60;
        }

        if (sum.minutes >= 60)
        {
            sum.hours += sum.minutes / 60;
            sum.minutes %= 60;
        }

        return sum;
    }
};

int main()
{
    Time t1(2, 13, 22);
    Time t2(5, 40, 17);

    t1.display();
    t2.display();

    Time t3 = t1.addTime(t2);

    cout << "Sum of t1 and t2:" << endl;
    t3.display();

    return 0;
}
