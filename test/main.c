#define CTEST_MAIN
#define CTEST_COLOR_OK

#include <functions.h>
#include <ctest.h>

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}

CTEST(area_calculation_test, result_test)
{
	//Given
	circle f;
	f.radius = 4.5; 

	//When
	const double result = area_calculation(&f);

	//Then
	const double expected = 63.617251;
	ASSERT_EQUAL(expected, result);
}

CTEST(perimeter_calculation_test, result_test)
{
	//Given
	circle f;
	f.radius = 1.5;

	//When
	const double result = perimeter_calculation(&f);

	//Then
	const double expected = 9.424778;
	ASSERT_EQUAL(expected, result);	
}