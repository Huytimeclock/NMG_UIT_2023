#pragma once

#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"

#define ID_ANI_BIG_BUSH 60000
#define ID_ANI_SMALL_BUSH 60001


class CBigBush : public CGameObject {
public:
	CBigBush(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CSmallBush : public CGameObject {
public:
	CSmallBush(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};