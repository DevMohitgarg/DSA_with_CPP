#include <bits/stdc++.h>
using namespace std;

string getZodiacSign(int day) {
    if (day >= 21 && day <= 31) {
        return "Aries";
    } else if (day >= 1 && day <= 19) {
        return "Taurus";
    } else if (day >= 20 && day <= 31) {
        return "Gemini";
    } else if (day >= 1 && day <= 22) {
        return "Cancer";
    } else if (day >= 23 && day <= 31) {
        return "Leo";
    } else if (day >= 1 && day <= 22) {
        return "Virgo";
    } else if (day >= 23 && day <= 31) {
        return "Libra";
    } else if (day >= 1 && day <= 22) {
        return "Scorpio";
    } else if (day >= 23 && day <= 31) {
        return "Sagittarius";
    } else if (day >= 1 && day <= 19) {
        return "Capricorn";
    } else if (day >= 22 && day <= 31) {
        return "Aquarius";
    } else if (day >= 1 && day <= 19) {
        return "Pisces";
    } else {
        return "Invalid day";  // This case handles days outside the valid range.
    }
}

int main() {
    int day;
    cout << "Enter the day of the month: ";
    cin >> day;

    string zodiacSign = getZodiacSign(day);
    cout << "The zodiac sign is: " << zodiacSign << endl;

    return 0;
}
