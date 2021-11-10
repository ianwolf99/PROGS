import pandas as pd 
#converting tuple to series

h = ('AA','2012-02-01',100,10.2)
s = pd.series(h)

type(s)
#series
print(s)

#converting  dict to series
d = {'name':'DELL LATITUDE','date':'12/27/2020','shares':100,'price':20500}
ds = pd.series(d)

type(ds)
print(ds)
