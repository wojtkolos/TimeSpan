#pragma once

class TimeSpan {
	unsigned int hours;
	unsigned int minutes; // [0 .. 59]
	unsigned int seconds; // [0 .. 59]
public:
	TimeSpan(unsigned int seconds);
	~TimeSpan() {}
	int getHours() const;
	int getMinutes() const;
	int getSeconds() const;
	void print();
};

