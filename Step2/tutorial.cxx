// 一个计算数字平方根的简单程序
#include <cmath>
#include <iostream>
#include <string>

// TODO 5: 包含 MathFunctions.h
#include "TutorialConfig.h"
#ifdef USE_MYMATH
#include "MathFunctions.h"
#endif

int main(int argc, char *argv[]) {
	if(argc < 2) {
		// 输出版本信息
		std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "." << Tutorial_VERSION_MINOR << std::endl;
		std::cout << "Usage: " << argv[0] << " number" << std::endl;
		return 1;
	}

	// 将输入转换为 double
	double const inputValue = std::stod(argv[1]);

	// 计算平方根
	// TODO 6: 用 mathfunctions::sqrt 替换 sqrt
#ifdef USE_MYMATH
	double const outputValue = mathfunctions::sqrt(inputValue);
#else
	double const outputValue = std::sqrt(inputValue);
#endif
	std::cout << "The square root of " << inputValue << " is " << outputValue << std::endl;
	return 0;
}
