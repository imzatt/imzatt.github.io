
data=[
    [ 12 , 14 , 6 , 7],
    [ 1 , 2 , 3 , 4],
    [ 5 , 6 , 7 , 8],
    [ 9 , 10 , 11 , 12]
    ]

outfile = open('table.dat','w')
for row in data:
    for column in row:
        outfile.write('%8.0f' % column)
    outfile.write('\n')

outfile.close()