number = int(input());

def fatorial(n):
    if(n > 1):
        return n * fatorial(n - 1);
    else:
        return n;
    
value = fatorial(number);

print(f"{value}\n");