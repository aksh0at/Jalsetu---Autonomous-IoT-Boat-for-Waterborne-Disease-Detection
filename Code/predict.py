import joblib

model = joblib.load("model.pkl")

sample = [[6.1,750,120,31]]

prediction = model.predict(sample)

if prediction[0]==1:
    print("Water Safe")
else:
    print("Contaminated Water")
