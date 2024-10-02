import pandas as pd
df = pd.DataFrame({'A': [1, 2, 3], 'B': [4, 5, 6]})
df_reindexado = df.reindex([2, 0, 1])
print(df_reindexado)
