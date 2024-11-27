#include <iostream>
using namespace std;

int main()
{
    const int daysPerWeek = 7;
    const int weeks = 4;
    double totalRainfall = 0;
    double weeklyTotal = 0;
    double maxRainfall = 0;
    int maxRainfallWeek = 0;
    int maxRainfallDay = 0;

    for (int week = 1; week <= weeks; ++week)
    {
        cout << "\nEnter rainfall data for Week " << week << ":\n";
        weeklyTotal = 0;

        for (int day = 1; day <= daysPerWeek; ++day)
        {
            double dailyRainfall;
            cout << "  Day " << day << ": ";
            cin >> dailyRainfall;

            weeklyTotal += dailyRainfall;
            totalRainfall += dailyRainfall;

            if (dailyRainfall > maxRainfall)
            {
                maxRainfall = dailyRainfall;
                maxRainfallWeek = week;
                maxRainfallDay = day;
            }
        }

        double weeklyAverage = weeklyTotal / daysPerWeek;
        cout << "  Average rainfall for Week " << week << ": " << weeklyAverage << " units\n";
    }

    cout << "\n*** Rainfall Statistics ***\n";
    cout << "1. Total rainfall for the month: " << totalRainfall << " units\n";
    cout << "2. Maximum rainfall: " << maxRainfall << " units, on Week " << maxRainfallWeek << ", Day " << maxRainfallDay << "\n";
   
    return 0;
}
