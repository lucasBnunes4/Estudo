// conv_temp.c
#include "conv_temp.h"

double ctok (double c) {
	return c + 273.15;
}

double ktoc (double k) {
	return k - 273.15;
}

double ctof (double c) {
	return (c * 9.0 / 5.0) + 32.0;
}

double ftoc (double f) {
	return (f - 32.0) * 5.0 / 9.0;
}

double ftok (double f) {
	return ctok(ftoc(f));
}

double ktof (double k) {
	return ctof(ktoc(k));
}


