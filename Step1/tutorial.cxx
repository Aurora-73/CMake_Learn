// 一个计算数字平方根的简单程序
#include <cmath>
// #include <cstdlib> // TODO 5: 删除此行
#include <iostream>
#include <string>

// TODO 11: 包含 TutorialConfig.h
#include "TutorialConfig.h"

int main(int argc, char *argv[]) {
	if(argc < 2) {
		std::cout << "Usage: " << argv[0] << " number" << std::endl;
		// TODO 12: 使用 Tutorial_VERSION_MAJOR 和 Tutorial_VERSION_MINOR 创建打印语句
		std::cout << "Cpp_Version: " << __cplusplus << std::endl;
		std::cout << "Tutorial_VERSION_MAJOR: " << Tutorial_VERSION_MAJOR << std::endl;
		std::cout << "Tutorial_VERSION_MINOR: " << Tutorial_VERSION_MINOR << std::endl;
		return 1;
	}

	// 将输入转换为 double
	// TODO 4: 用 std::stod(argv[1]) 替换 atof(argv[1])
	// const double inputValue = atof(argv[1]);
	const double inputValue = std::stod(argv[1]);

	// 计算平方根
	const double outputValue = sqrt(inputValue);
	std::cout << "The square root of " << inputValue << " is " << outputValue << std::endl;
	return 0;
}
