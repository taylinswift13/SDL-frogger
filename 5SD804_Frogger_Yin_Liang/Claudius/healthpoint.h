#pragma once
#include "Sprite.h"
#include "Transform.h"
#include "Collider.h"
#include "Color.h"
#include "ResourceManager.h"
#include "Image.h"
struct RenderManager;
class Healthpoint
{
public:
	Sprite sprite; // want it to render the sprite on the transform
	Transform trans;
	Collider collider;  // want it to render the collision rectangle also
	Image healthpointImage;

	void Initialize(ResourceManager& resourseManager, Vector2 startPosition);
	void Update(float dt);
	void Render(RenderManager& renderManager);
};

