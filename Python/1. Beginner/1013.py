a, b, c = map(int, input().split(" "))

ab = (a + b + abs(a - b)) / 2

bc = (c + ab + abs(ab -c)) / 2

print(f"{int(bc)} eh o maior\n")