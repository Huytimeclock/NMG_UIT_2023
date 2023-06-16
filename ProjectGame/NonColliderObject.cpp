#include "NonColliderObject.h"

void CBigBush::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_BIG_BUSH)->Render(x, y);
	//RenderBoundingBox();
}

void CSmallBush::Render()
{
	CAnimations* animations = CAnimations::GetInstance();
	animations->Get(ID_ANI_SMALL_BUSH)->Render(x, y);
	//RenderBoundingBox();
}

void CBigBush::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = 0;
	t = 0;
	r = 0;
	b = 0;
}

void CSmallBush::GetBoundingBox(float& l, float& t, float& r, float& b)
{
	l = 0;
	t = 0;
	r = 0;
	b = 0;
}