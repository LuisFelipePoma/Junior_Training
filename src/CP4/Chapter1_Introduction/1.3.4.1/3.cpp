#include <bits/stdc++.h>


// 3. Given a date (in the past), determine the day of the week (Monday, . . . , Sunday) on
// that day and the number of day(s) that has elapsed since that day until present.
// (e.g., 9 August 2010—the launch date of the first edition of this book—is a Monday.
struct Date
{
	int day;
	int month;
	int year;
};

const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int dayOfWeek(int day, int month, int year)
{
	// Zeller's Congruence algorithm
	if (month < 3)
	{
		month += 12;
		year--;
	}

	int k = year % 100;
	int j = year / 100;

	int dayOfWeek = (day + 13 * (month + 1) / 5 + k + k / 4 + j / 4 - 2 * j) % 7;

	// Adjust to have Sunday as 0 instead of 7
	return (dayOfWeek + 7) % 7;
}

int daysElapsed(const Date &pastDate)
{
	const int daysInYear = 365;
	int days = 0;

	for (int year = pastDate.year; year < 2023; ++year)
	{
		int daysInThisYear = isLeapYear(year) ? daysInYear + 1 : daysInYear;
		days += daysInThisYear;
	}

	for (int month = 1; month < pastDate.month; ++month)
	{
		days -= daysInMonth[month];
		if (month == 2 && isLeapYear(pastDate.year))
			days++; // Leap year, February has 29 days
	}

	days -= pastDate.day;

	return days;
}

int main()
{
	Date pastDate = {9, 8, 2010}; // 9 August 2010

	// Get the day of the week
	const char *daysOfWeek[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	int dayIndex = dayOfWeek(pastDate.day, pastDate.month, pastDate.year);

	// Get the number of days elapsed
	int daysElapsedValue = daysElapsed(pastDate);

	// Output results
	std::cout << "The day of the week for 9 August 2010 is " << daysOfWeek[dayIndex] << "." << std::endl;
	std::cout << "Number of days elapsed until today: " << daysElapsedValue << " days." << std::endl;

	return 0;
}
