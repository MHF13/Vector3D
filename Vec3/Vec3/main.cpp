#include <iostream>
#include <cstdlib>
#include "vec3.h"
using namespace std;

int main() {
	
	vec3<float> a;
	vec3<int> c(3, 3, 3);
	vec3<float> d(2.5f, 2.5f, 2.5f);
	vec3<int> b(c);


	system("pause");
	return 0;
}

