#pragma once

// Needs to be static so that we don't need to instanciate it
static class math
{
public:
	// given base and exponent, calculate value
	static int pow(int base, int exp);
};

