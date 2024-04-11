#pragma once
#include "Sprite.h"
#include "Transform.h"
#include "Collider.h"
#include "Color.h"
#include "ResourceManager.h"
#include "Image.h"
#include "KeyCode.h"
struct RenderManager;

class Log
{
public:
	Sprite sprite; // want it to render the sprite on the transform
	Transform trans;
	Collider collider;  // want it to render the collision rectangle also
	Image logImage;
	Color colliderColor;
	float speed=0;

	void Initialize(ResourceManager& resourseManager, float speed, Vector2 startPosition);
	void Update(float dt);
	void Render(RenderManager& renderManager);
};

