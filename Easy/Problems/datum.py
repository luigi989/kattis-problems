from datetime import date

day, month = [int(num) for num in input().split()]
specificDate = date(2009, month, day)
weekdayNumber = specificDate.weekday()

def getWeekday(day):
    return {
        0: 'Monday',
        1: 'Tuesday',
        2: 'Wednesday',
        3: 'Thursday',
        4: 'Friday',
        5: 'Saturday',
        6: 'Sunday'
    }[day]
print(getWeekday(weekdayNumber))