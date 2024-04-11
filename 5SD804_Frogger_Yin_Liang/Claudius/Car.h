#pragma once
#include "Sprite.h"
#include "Transform.h"
#include "Collider.h"
#include "Color.h"
#include "ResourceManager.h"
#include "Image.h"
#include "KeyCode.h"
struct RenderManager;

enum class CarType {
	Type1=1,
	Type2=2,
	Type3=3,
	Type4=4,
	Type5=5,
};

class Car
{
public:
	Sprite sprite; // want it to render the sprite on the transform
	Transform trans;
	Collider collider;  // want it to render the collision rectangle also
	Image CarImage;
	float speed=0;
	CarType type;
	Color colliderColor;

	void Initialize(ResourceManager& resourseManager, float speed, Vector2 startPosition, CarType type);
	void Update(float dt);
	void Render(RenderManager& renderManager);
};

