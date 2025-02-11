#pragma once

double seconds_difference(double time_1, double time_2);

double hours_difference(double time_1, double time_2);

double to_float_hours(int hours, int minutes, int seconds);

double to_24_hour_clock(double hours);

double get_hours(double time);

double get_minutes(double time);

double get_seconds(double time);

double time_to_utc(int utc_offset, double time);

double time_from_utc(int utc_offset, double time);

