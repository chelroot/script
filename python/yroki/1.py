#!/usr/bin/env python3
import calendar, datetime, time
moon_datetime_a = datetime.datetime(1969, 7, 20, 20, 17, 40)
moon_time = calendar.timegm(moon_datetime_a.utctimetuple())
moon_datetime_b = datetime.datetime.utcfromtimestamp(moon_time)
moon_datetime_a.isoformat()     # вернет: '19690720T20:17:40'
moon_datetime_b.isoformat()     # вернет: '19690720T20:17:40'
print time.strftime("%Y%m%dT%H:%M:%S", time.gmtime(moon_time))
