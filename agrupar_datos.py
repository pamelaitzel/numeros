import pandas as pd
df = pd.DataFrame({'A': ['a', 'b', 'a'], 'B': [1, 2, 3]})
agrupado = df.groupby('A').sum()
print(agrupado)
