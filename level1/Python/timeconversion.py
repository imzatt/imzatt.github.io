# second to hr:min:sec
# sec 60 = 10min
# min 60 = 1hr = 3600 sec
# sec => hr:min:sec
# 1 : divide sec with 3600 / // %
# 2 : divide sec with 3600 using % operator get sec to calculate minutes: 
# 3 : divide remaining sec in step 2 with 60 using // operator to get minutes
# 4 : divide remaining sec in step 2 with 60 using % operator to get sec
# 4000 => 3600 + 400 => // => %
seconds = int(input('Enter seconds to calculate hr:min:sec : '))
hr = seconds//3600
seconds = seconds%3600
min = seconds//60
sec = seconds%60
print(hr,'HR: ',min,'MIN:',sec,'SEC')