#pragma once

#include "GameObject.h"
#include "Animation.h"
#include "Animations.h"

#define ID_ANI_BRICK 10000
#define ID_ANI_BRICK2 10001
#define ID_ANI_BRICKRED1 10011
#define ID_ANI_BRICKRED2 10012
#define ID_ANI_BRICKRED3 10013
#define ID_ANI_BRICKRED4 10014
#define ID_ANI_BRICKRED5 10015
#define ID_ANI_BRICKRED6 10016
#define ID_ANI_BRICKRED7 10017
#define ID_ANI_BRICKRED8 10018
#define ID_ANI_BRICKRED9 10019
#define ID_ANI_BRICKBLUE1 10021
#define ID_ANI_BRICKBLUE2 10022
#define ID_ANI_BRICKBLUE3 10023
#define ID_ANI_BRICKBLUE4 10024
#define ID_ANI_BRICKBLUE5 10025
#define ID_ANI_BRICKBLUE6 10026
#define ID_ANI_BRICKBLUE7 10027
#define ID_ANI_BRICKBLUE8 10028
#define ID_ANI_BRICKBLUE9 10029
#define BRICK_WIDTH 16
#define BRICK_BBOX_WIDTH 16
#define BRICK_BBOX_HEIGHT 16

class CBrick : public CGameObject {
public:
	CBrick(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrick2 : public CGameObject {
public:
	CBrick2(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrickRed1 : public CGameObject {
public:
	CBrickRed1(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrickRed2 : public CGameObject {
public:
	CBrickRed2(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrickRed3 : public CGameObject {
public:
	CBrickRed3(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrickRed4 : public CGameObject {
public:
	CBrickRed4(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrickRed5 : public CGameObject {
public:
	CBrickRed5(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrickRed6 : public CGameObject {
public:
	CBrickRed6(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrickRed7 : public CGameObject {
public:
	CBrickRed7(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrickRed8 : public CGameObject {
public:
	CBrickRed8(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrickRed9 : public CGameObject {
public:
	CBrickRed9(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrickBLUE1 : public CGameObject {
public:
	CBrickBLUE1(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrickBLUE2 : public CGameObject {
public:
	CBrickBLUE2(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrickBLUE3 : public CGameObject {
public:
	CBrickBLUE3(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrickBLUE4 : public CGameObject {
public:
	CBrickBLUE4(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrickBLUE5 : public CGameObject {
public:
	CBrickBLUE5(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrickBLUE6 : public CGameObject {
public:
	CBrickBLUE6(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrickBLUE7 : public CGameObject {
public:
	CBrickBLUE7(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrickBLUE8 : public CGameObject {
public:
	CBrickBLUE8(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};

class CBrickBLUE9 : public CGameObject {
public:
	CBrickBLUE9(float x, float y) : CGameObject(x, y) {}
	void Render();
	void Update(DWORD dt) {}
	void GetBoundingBox(float& l, float& t, float& r, float& b);
};