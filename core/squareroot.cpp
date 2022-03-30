#include "squareroot.h"
/*
#include <openssl/bn.h>
#include <openssl/evp.h>
#include <openssl/pem.h>
*/

namespace mathematics {

	SquareRoot::SquareRoot() = default;
	SquareRoot::~SquareRoot() = default;

	float SquareRoot::calculateSquareRoot(float num) {
		return sqrt(num);
	}

	float SquareRoot::squareRoot(float num) {
		return calculateSquareRoot(num); 
	}

	float SquareRoot::squareRoot(int num) {
		// EVP_PKEY* pkey = NULL;
		// EVP_PKEY_CTX *ctx  = EVP_PKEY_CTX_new(pkey, NULL /* *engine */);
		return calculateSquareRoot(1.0 * num);
	}
}