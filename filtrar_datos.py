import pandas as pd
df = pd.DataFrame({'A': [1, 2, 3], 'B': [4, 5, 6]})
filtrado = df[df['A'] > 1]
print(filtrado)
