import pandas as pd 
data = { 'name' : ['AA','IBM','DELL LATITUDE'],
		 'date':['12/27/2020','12/28/2020','12/29/2020'],
		 'shares':['1000','2000','2001'],
		 'price':['20500','21500','22500']
	
}

df = pd.DataFrame(data)
type(df)
print(df)
df
df