#ifndef MOD_H
#define MOD_H
#include "calculator.h"
class Mod:public Calculator{
	public:
		double calculate(double a,double b) override;
};
#endif
