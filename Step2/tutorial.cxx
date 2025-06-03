// 一个计算数字平方根的简单程序
#include <cmath>
#include <iostream>
#include <string>

#include "TutorialConfig.h"

// TODO 11: 仅当定义了 USE_MYMATH 时才包含 MathFunctions
#ifdef USE_MYMATH
// TODO 5: 包含 MathFunctions.h
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

	// TODO 12: 如果定义了 USE_MYMATH 则使用 mysqrt，否则使用 sqrt
	// 计算平方根
	// TODO 6: 用 mysqrt 替换 sqrt
	// const double outputValue = sqrt(inputValue);
#ifdef USE_MYMATH
	const double outputValue = mysqrt(inputValue);
#else
	const double outputValue = sqrt(inputValue);
#endif

	std::cout << "The square root of " << inputValue << " is " << outputValue << std::endl;
	return 0;
}
