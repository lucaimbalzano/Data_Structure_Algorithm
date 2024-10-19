# Data Structure & Algorithm

<b> Compile single source file:</b>

```bash
 $ clang++ ./main.cpp -o out   
```

<b> Build the project using cmake</b>

```bash
# From your project root directory
$ cmake -S . -B cmake-build-debug

# Build the project
$ cmake --build cmake-build-debug

```

<b> Debug </b>

```bash
# Set the debug pointing your executable
$ lldb ./exec
$ breakpoint set --file ./path/main.cpp --line 10
$ print variable_name


```
