#include <iostream>

using namespace std;

int main()
{
    string nickname, courseYearLevel, school;
    cout << "Nickname: ";
    cin >> nickname;

    cout << "Course Year Level: ";
    cin >> courseYearLevel;

    cout << "School: ";
    cin >> school;

    cout << "Wow congrats " << nickname << " on a nice course. And you are studying in " << school << ", which is a center of excellence in Tertiary Education.\n";

    return 0;
}