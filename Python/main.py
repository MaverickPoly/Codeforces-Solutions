"""
Triangle
a + b > c
b + c > a
a + c > b

Segment
a + b = c
b + c = a
a + c = b
"""

from itertools import combinations

l = list(map(int, input().split()))
a, b, c, d = l

triangle = False
segment = False

for comb in combinations(l, 3):
    a, b, c = sorted(comb)
    if a + b > c:
        triangle = True
        break
    elif a + b == c:
        segment = True

if triangle:
    print("TRIANGLE")
elif segment:
    print("SEGMENT")
else:
    print("IMPOSSIBLE")

