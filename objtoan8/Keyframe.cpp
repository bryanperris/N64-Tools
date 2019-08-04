#include "StdAfx.h"
#include "Keyframe.h"

CKeyframe::CKeyframe(void)
{
	translation = float3(0,0,0);
	rotation = float3(0,0,0);
	scale = float3(1,1,1);
	number = -1;
	for (int x = 0; x < 3; x++)
	{
		rotationIsInterpolated[x] = false;
		translationIsInterpolated[x] = false;
		scaleIsInterpolated[x] = false;
	}
}

CKeyframe::~CKeyframe(void)
{
}
