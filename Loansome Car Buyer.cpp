#include <bits/stdc++.h>

using namespace std;

int main()
{

    int duration;
    double downPayment;
    double loanAmount;
    int numberOfDepreciationRecords;

    while ((cin >> duration >> downPayment >> loanAmount >> numberOfDepreciationRecords) && duration >= 0)
    {
        duration++;
        double depreciationRecords[duration];
        fill_n(depreciationRecords, duration, -1.0);

        for (int i = 0; i < numberOfDepreciationRecords; i++)
        {
            int month;
            double depreciation;
            cin >> month >> depreciation;
            depreciationRecords[month] = depreciation;
        }
        double value = 0;
        for (int i = 0; i < duration; i++)
        {
            if (depreciationRecords[i] != -1)
            {
                value = depreciationRecords[i];
            }
            else
            {
                depreciationRecords[i] = value;
            }
        }
        // cout << "outPut" << endl;
        // for (int i = 0; i < duration; i++)
        // {
        //     cout << i << " " << depreciationRecords[i] << " " << endl;
        // }

        double depreciatedCar = loanAmount + downPayment, remainingValueOfCar = loanAmount;
        double perMonthPayment = loanAmount/(duration-1);
        for (int i = 0; i < duration; i++)
        {
            depreciatedCar -= depreciatedCar*depreciationRecords[i];
            remainingValueOfCar -= perMonthPayment;
            //cout << depreciatedCar << " " << remainingValueOfCar <<endl;
            if(depreciatedCar > remainingValueOfCar){
                cout << i+1 << " ";
                (i>1) ? cout << "months" <<endl :cout << "month" <<endl;
                break;
            }
        }
    }
    return 0;
}