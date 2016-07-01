## Grok - Another JavaScript interpreter

_Grok_ is a simple and tiny javascript interpreter written in C++. I made it because I wanted to learn how Compiler works.

### Features

Declare variables:

```js
a = 10;

// or create strings
b = 'grok';

// or create an array
c = [ 1,2,4,6 ];

// or create objects
d = {
  a : 100,
  b : {
    arr : [1,2,4,5]
  }
};

```
Write complex expressions like:

```js
sum = d.a + c[0] + c.length + d.b.arr[2];

```

Create functions:

```js
function fib(n) {
    if (n == 0 || n == 1)
        return 0;
    else if (n == 2)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

// call functions
console.log(fib(10)); // yup console object is supported
```

## Building
### Requirements
+ Boost C++ Library
+ GNU Readline Library
+ pthread (optional)
+ cmake
+ C++ compiler with C++14 support
+ Ubuntu 16.04 (not tested for other operating systems)

### Compiling
One step: `cd grok && mkdir build && cd build && cmake .. && make -j4`

### Contribute
Grok is currently in development stage. New features will be added slowly.
It is just a free time project. I work on it whenever I am free. If you want
to help, feel free to open pull requests or create issues.

### Things that do not work

+ function expressions
+ var, let, const declarations
+ switch case statements
+ break, continue statements
+ `this` may not work properly
+ constructors
