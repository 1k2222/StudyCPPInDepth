# 一些C++的细节特性，可能会对面试有帮助

1. new 无论是否带括号，无论new的是class还是struct,都会调用构造函数(详见BracketsOfNew.h)

2. struct模板在**VS2015**中可以定义(详见TestTemplateStruct.h)
