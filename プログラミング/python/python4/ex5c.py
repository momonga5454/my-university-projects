# -*- coding: utf-8 -*-
"""ex5b

Automatically generated by Colab.

Original file is located at
    https://colab.research.google.com/drive/1VPwJKsURKcB4tzDCS7rq3dtjy0f4_MUu
"""

import random
x = random.sample(list(range(1, 11)), k=random.randint(2, 5))
y = random.sample(list(range(1, 11)), k=random.randint(2, 5))
print("x:", x)
print("y:", y)
L=len(x)

for i in range(L):
  if x[i] in y:
      print("First common number: "+str(x[i]))
      break
  elif i==L-1:
    print("No common number")