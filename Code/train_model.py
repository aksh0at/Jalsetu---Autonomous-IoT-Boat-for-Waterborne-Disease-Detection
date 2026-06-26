pH,TDS,Turbidity,Temperature,Safe
7.2,180,12,27,1
5.8,820,145,31,0
6.9,210,18,28,1
5.3,900,180,32,0






import pandas as pd
from sklearn.ensemble import RandomForestClassifier
import joblib

data = pd.read_csv("dataset.csv")

X = data[['pH','TDS','Turbidity','Temperature']]
y = data['Safe']

model = RandomForestClassifier()

model.fit(X,y)

joblib.dump(model,"model.pkl")
