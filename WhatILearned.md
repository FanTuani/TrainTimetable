> by developing this project, I learned...

# CMake

- 如何 include 在子目录中的头文件

```cmake
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/header)
```

# C++

- 异常处理: `try` `catch` `throw` 以及如何编写异常类
- 成员函数后加 `const` 修饰符，承诺该成员函数不会修改对象的任何成员变量
- 函数前 `[[nodiscard]]` 属性(attribute)，被该属性修饰的函数返回值保证不弃用
- 单参数函数前 `explicit` 关键字，禁止参数进行隐式类型转换
- 循环引用(circular dependency)问题，即两个头文件相互包含，可以通过前向声明(forward declaration)解决
- 不能向接受引用参数的函数传递一个临时对象，若要这么做，则应在函数参数中声明其为 `const`