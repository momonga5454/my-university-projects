# -*- coding: utf-8 -*-
"""ex4c

Automatically generated by Colab.

Original file is located at
    https://colab.research.google.com/drive/1VPwJKsURKcB4tzDCS7rq3dtjy0f4_MUu
"""

import random
n = random.randint(2, 5)
print("n =", n)
N=int(n)
p=1

for i in range(N):
  n=int(input("Input an integer : "))
  p *= n
print("prod="+str(p))