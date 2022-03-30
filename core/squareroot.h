#include <cmath>

namespace mathematics {
	class SquareRoot {
	private:
		float calculateSquareRoot(float num); 
	public:
		SquareRoot();
		~SquareRoot();

		float squareRoot(float num);
		float squareRoot(int num);
	};
}