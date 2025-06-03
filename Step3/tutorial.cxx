// 一个计算数字平方根的简单程序
#include <cmath>
#include <iostream>
#include <string>

#include "TutorialConfig.h"

// 是否需要包含 MathFunctions 头文件？
#ifdef USE_MYMATH
#include "MathFunctions/MathFunctions.h"
#endif

int main(int argc, char *argv[]) {
	if(argc < 2) {
		// 输出版本信息
		std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
		          << Tutorial_VERSION_MINOR << std::endl;
		std::cout << "Usage: " << argv[0] << " number" << std::endl;
		return 1;
	}

	// 将输入转换为 double
	const double inputValue = std::stod(argv[1]);

	// 应该使用哪个平方根函数？
#ifdef USE_MYMATH
	const double outputValue = mysqrt(inputValue);
#else
	const double outputValue = sqrt(inputValue);
#endif

	std::cout << "The square root of " << inputValue << " is " << outputValue << std::endl;
	return 0;
}
