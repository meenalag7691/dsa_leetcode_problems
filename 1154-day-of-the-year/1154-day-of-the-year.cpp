class Solution {
public:
    int dayOfYear(string date) {
        // // jan - 31 , feb - 28 , march - 31
        // string Y = date.substr(0, 4);
        // int year = stoi(Y);
        // string M = date.substr(5,2);
        // int month = stoi(M);
        // string D = date.substr(8,2);
        // int day = stoi(D);
        // if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        // {
        //     //feb -> 29
        //     if()
        // }
     
        // String se Year, Month, aur Day nikalna
        int year = stoi(date.substr(0, 4));
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));

        // Har month ke normal days
        vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // Leap year check
        bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

        int totalDays = day;

        // Current month se pehle wale sabhi months ke din add karein
        for (int i = 0; i < month - 1; i++) {
            totalDays += daysInMonth[i];
        }

        // Agar leap year hai aur month Feb ke baad ka hai (March ya uske baad), toh 1 day add karein
        if (isLeap && month > 2) {
            totalDays += 1;
        }

        return totalDays;
    
    }
};