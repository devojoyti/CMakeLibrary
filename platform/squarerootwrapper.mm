#include "squarerootwrapper.h"
#include "squareroot.h"

@implementation SquareRootWrapper 
{
	mathematics::SquareRoot* _squareRoot;
}


	- (id) init
	{
		self = [super init];

		if (self)
		{
			_squareRoot = new mathematics::SquareRoot();
		}

		return self;
	}

	- (int) GetSquareRootInt: (int) num
	{
		int ans = (int)_squareRoot-> squareRoot(num);
		return ans;
	}

	- (float) GetSquareRootFloat: (float) num
	{
		return _squareRoot-> squareRoot(num);
	}

@end