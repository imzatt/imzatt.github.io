def double(x):
    return 2*x

def test_double():
    tol=1E-8
    x_values=       [3,7,-2,0,4.5]
    excepted_values=[6,14,-4,0,9.00000001]
    for x,excepted in zip(x_values,excepted_values):
        computed=double(x)
        msg='%s != %s' %(computed,excepted)
        assert abs(excepted-computed)<tol,msg
test_double()