Given an integer with no more than 9 digits, you are supposed to read it in the traditional Chinese way. Output `Fu` first if it is negative. For example, -123456789 is read as `Fu yi Yi er Qian san Bai si Shi wu Wan liu Qian qi Bai ba Shi jiu`. Note: zero (`ling`) must be handled correctly according to the Chinese tradition. For example, 100800 is `yi Shi Wan ling ba Bai`.

### Input Specification:

Each input file contains one test case, which gives an integer with no more than 9 digits.

### Output Specification:

For each test case, print in a line the Chinese way of reading the number. The characters are separated by a space and there must be no extra space at the end of the line.

### Sample Input 1:

```in
-123456789
```

### Sample Output 1:

```out
Fu yi Yi er Qian san Bai si Shi wu Wan liu Qian qi Bai ba Shi jiu
```

### Sample Input 2:

```in
100800
```

### Sample Output 2:

```out
yi Shi Wan ling ba Bai
```