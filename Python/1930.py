# -*- coding: utf-8 -*-

t = input().split(" ");
qtd_t = len(t);
soma = 0;

for i in range(0, qtd_t):
    soma = soma + int(t[i]);

print(soma - (qtd_t - 1));