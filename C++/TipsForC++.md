# Tips for C++

## Set Precision

In Beecrowd, some exercise have to limit how many digits in floating point you need. So the `<iomanip>` library has a function that you can use in `std::cout` to limit the precision `std::setprecision(X)` (where "X" are the number of digits), in the same library you have `std::fixed` to fix how many digits you want.

You will also see some of exercise code using this library.

Obs.: the `std::setprecision` function don't fix the digits, example: 

If you make 3.14 + 3.145, your ansawer will be: `3.18`, but, if you make: 10.0 + 10.0, your output will be: `10`, and in beecrowd will consider a `Presetantion Error`. So, this why you need to use `std::fixed`.

### Example of Code

```C++
#include <iomanip>

int main(){
    int a = 3.146;
    int b = 5.123;

    std::cout << std::fixed << std::setprecision(2) << a + b << endln

    return 0;
}
```

---

## Read Values in One Line

In Beecrowd and some international code exercise (like ICPC maraton) you need to read some values in just one line, in C++ it's simple, you only need to use the code like this:

```C++
std::cin >> name >> sal >> comm;
```

In this way, you're able to read three values from the first line. There will be a error if the quantity of values of the input is `i > n` or `n < i`, where `i` is the quantity of inputs of the user and `n` is the number of variables in `std::cin`.

## Assuming Integer

Note, in some language (like C++) the division of two integers like: `(10/4)` will return a integer, so, in some exercises you need to assume that some of the values has a floating point, like: `10.0/4` or `10/4.0`, or everything like this.