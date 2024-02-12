#include <bits/stdc++.h>
using namespace std;

// 5. Given the distinct and valid birthdates of n people as triples (DD, MM, YYYY), order
// them first by ascending birth months (MM), then by ascending birth dates (DD), and
// finally by ascending age

struct Person
{
	int day;
	int month;
	int year;
};

// Custom comparator to order by month, date, and age
bool compareBirthdates(const Person &a, const Person &b)
{
	if (a.month != b.month)
	{
		return a.month < b.month; // Sort by ascending birth months
	}
	if (a.day != b.day)
	{
		return a.day < b.day; // If birth months are equal, sort by ascending birth dates
	}
	return a.year < b.year; // If both birth months and dates are equal, sort by ascending age
}
int main()
{
	int n, d, m, y;
	cin >> n;

	// Input birthdates
	std::vector<Person> people(n);
	for (int i = 0; i < n; ++i)
	{
		std::cin >> people[i].day >> people[i].month >> people[i].year;
	}

	// Sort people using the custom comparator
	std::sort(people.begin(), people.end(), compareBirthdates);

	// Output the sorted birthdates
	for (const auto &person : people)
	{
		std::cout << person.day << " " << person.month << " " << person.year << std::endl;
	}
	return 0;
}
