# -*- coding: utf-8 -*-

t = int(input());

c = input().split(" ");

cont = 0;

for i in range(0, 5):
    if int(c[i]) == t:
        cont = cont + 1;

print(cont);