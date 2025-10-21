# Scalable-FizzBuzz
The famous FizzBuzz interview problem, made to be more scalable

> Feel free to use and modify to your heart's content

# How to use:

1. Locate the **ENUM_LIST** at the top of the file. This is how it should look like:

```c
#define ENUM_LIST \
    X(Fizz, 3) \
    X(Buzz, 5) \
    X(Suzz, 7) \
    X(Dizz, 11) \
```

2. Add/Remove any element like so:

```c
X(name, value) \
```

3. Now for the *value* divisor, *name* text will appear.

# Output example

Using the default configuration, for the first 50 numbers, it will print:

```
1: 1
2: 2
3: Fizz
4: 4
5: Buzz
6: Fizz
7: Suzz
8: 8
9: Fizz
10: Buzz
11: Dizz
12: Fizz
13: 13
14: Suzz
15: FizzBuzz
16: 16
17: 17
18: Fizz
19: 19
20: Buzz
21: FizzSuzz
22: Dizz
23: 23
24: Fizz
25: Buzz
26: 26
27: Fizz
28: Suzz
29: 29
30: FizzBuzz
31: 31
32: 32
33: FizzDizz
34: 34
35: BuzzSuzz
36: Fizz
37: 37
38: 38
39: Fizz
40: Buzz
41: 41
42: FizzSuzz
43: 43
44: Dizz
45: FizzBuzz
46: 46
47: 47
48: Fizz
49: Suzz
```
