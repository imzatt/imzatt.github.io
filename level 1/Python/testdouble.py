def double(x):
    return 2*x

def test_double():
    x=4
    excepted=8.2
    computed=double(x)
    success= computed==excepted
    msg="computed %s , expected %s" %(computed,excepted)
    assert success,msg  #error

test_double()