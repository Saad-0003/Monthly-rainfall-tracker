# Rainfall Tracker

A simple C++ console application that collects and analyzes daily rainfall data over a 4-week period with clean formatting and basic statistics.

## Features

- Daily rainfall data collection for 4 weeks
- Weekly total and average calculations
- Monthly statistics summary
- Maximum and minimum rainfall tracking
- Input validation for non-negative values
- Clean terminal output formatting

## How It Works

1. Enter rainfall data for 7 days across 4 weeks (28 total entries)
2. Program validates input to ensure non-negative values
3. Calculates weekly totals and averages in real-time
4. Displays final summary with monthly statistics
5. Shows maximum and minimum rainfall days

## Sample Output

```
========================================
        RAINFALL DATA TRACKER
========================================

Enter rainfall data for Week 1:
--------------------------------
  Day 1: 2.5
  Day 2: 1.8
  Day 3: 3.2
  ...
  Weekly Total: 15.60 units
  Weekly Average: 2.23 units

========================================
           RAINFALL SUMMARY
========================================

MONTHLY STATISTICS:
- Total rainfall: 45.60 units
- Average per day: 1.63 units

EXTREME VALUES:
- Maximum rainfall: 8.20 units (Week 2, Day 3)
- Minimum rainfall: 0.10 units (Week 4, Day 1)
```

## Technical Details

- Language: C++
- Libraries: iostream, iomanip
- Input validation for negative values
- Fixed-point decimal formatting

## Learning Concepts Demonstrated

- Loops (for loops for data collection)
- Input validation and error handling
- Basic mathematical calculations
- Formatted output using iomanip
- Variable tracking and comparison logic
