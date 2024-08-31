from sklearn import tree

# Rough 1
# Smooth 2

def main():
    BallFeatures = [[35,1],[47,1],[90,2],[48,1],[90,2],[35,2],[92,2],[35,1],[35,1],[35,1],[96,2],[110,2],[35,2],[95,2]]

    Labels=[1,1,2,1,2,2,2,1,1,1,2,2,2,2]
    obj=tree.DecisionTreeClassifier() #Decide the algorithm

    obj=obj.fit(BallFeatures,Labels) #Train the model

    print(obj.predict([[36,1],[91,2]])) #Test the model

if __name__ == "__main__":
    main()