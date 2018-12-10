## 基于 Makefile 搭建的一个多 c 文件的示例项目工程

### 目标

实现类似于 kernel 一样的添加文件模式。

目标示例说明，若要在项目中添加 gsensor 驱动程序，只需要做以下几个简单的步骤：

1. 在 src/drivers/ 目录下创建一个 gsensor 目录
2. 将 gsensor.c 和 gsensor.h 两个文件移动到刚刚创建的 gsensor 目录下
3. 在 gsensor 目录下创建一个 Makefile，其内容如下：

       obj-y += gsensor.o

4. 在 drivers 目录下的 Makefile 中追加

       obj-y += gsensor/

### 使用

1. 执行 make
2. 运行 ./app