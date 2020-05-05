#pragma once
/* NAMESPACES
   A namespace is a scope container where you can place classes, functions or variables to prevent conflict with others
   Anytime you need to avoid ambiguity use the namespace designator ahead of the identifier: std::cout
   You can define nested namespaces

   namespace Microsoft
    {
        namespace Geometry
        {
            const double PI = 3.14159;

            double Area(double radius)
            {
                return PI*(r*r);
            }
        }

    }
 */
namespace MyNS
{
	// Needs to be static so that we don't need to instanciate it
	static class math
	{
	public:
		// given base and exponent, calculate value
		static int pow(int base, int exp);
	};
}


